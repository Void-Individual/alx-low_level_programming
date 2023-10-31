#include "main.h"

void print_error_and_exit(const char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void print_elf_info(const char* file)
{
	int fd, i;
	Elf64_Ehdr elf_header;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		print_error_and_exit("Error opening file");

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
		print_error_and_exit("Error reading ELF header");

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error_and_exit("Not an ELF file");

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\nClass:   %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data:    %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", (elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:    %s\n", (elf_header.e_type == ET_REL) ? "Relocatable" :
				(elf_header.e_type == ET_EXEC) ? "Executable" :
				(elf_header.e_type == ET_DYN) ? "Shared object" :
				(elf_header.e_type == ET_CORE) ? "Core file" : "Other");
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);
	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		print_error_and_exit("Usage: elf_header elf_filename");
	print_elf_info(argv[1]);
	return 0;
}

static int currentLuckIndex = 0;

int customRandomNumberGenerator(void)
{
	int luckyNumbers[] = {8, 8, 7, 9, 23, 74};
	const int numberOfLuckyNumbers = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]);
	int result = luckyNumbers[currentLuckIndex];
	currentLuckIndex = (currentLuckIndex + 1) % numberOfLuckyNumbers;

	return result;
}

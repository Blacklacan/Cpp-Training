
bool CheckPerfect(int Number) {
	int sum = 0;
	for (int counter = 1; counter < Number; counter++)
	{
		if (Number % counter == 0)
			sum += counter;
	}

	return sum == Number;


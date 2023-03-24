
#pragma once

#include <cstdlib>

namespace NumbersVar{

	int RandomNumber(int From, int To) {
		int randNumb = rand() % (To - From + 1) + From;
		return randNumb;
	}

	bool CheckPerfect(int Number) {
		int sum = 0;
		for (int counter = 1; counter < Number; counter++)
		{
			if (Number % counter == 0)
				sum += counter;
		}

		return sum == Number;

	}

	bool CheckPrimeNumber(int Number) {

		int M = round(Number / 2);

		for (int counter = 2; counter <= M; counter++)
		{
			if (Number % counter == 0)
				return false;
		}

		return true;
	}
}
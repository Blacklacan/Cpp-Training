#pragma once

#include <cstdlib>

namespace Random {

	int RandomNumber(int From, int To) {
		int randNumb = rand() % (To - From + 1) + From;
		return randNumb;
	}
}
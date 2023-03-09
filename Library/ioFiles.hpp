#pragma once
#include <fstream>
#include <iostream>
#include <string>

namespace ioFiles {

	void PrintFileContenet(std::string FileName) {
		std::fstream MyFile;
		MyFile.open(FileName, std::ios::in);

		if (MyFile.is_open())
		{
			std::string Line;
			while (getline(MyFile, Line)) {
				cout << Line << endl;
			}
			MyFile.close();
		}
	}
}

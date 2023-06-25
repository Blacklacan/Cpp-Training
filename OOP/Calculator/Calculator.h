
#pragma once

#include <iostream>
#include <string>
using namespace std;



class Calculator
{
private:
	int _Number1;
	int _Number2;
	int _Cache = 0;

protected:


	void setCache(int Cache) {
		_Cache = Cache;
	}
	int getChache() {
		return _Cache;
	}
	__declspec(property(put = setCache, get = getChache)) int Chache;


public:


	void setNumber1(int Number) {

		_Number1 = Number;
	}
	int getNumber1() {
		return _Number1;
	}
	__declspec(property(get = getNumber1, put = setNumber1)) int NumberOne;

	void setNumber2(int Number) {

		_Number2 = Number;
	}
	int getNumber2() {
		return _Number2;
	}
	__declspec(property(get = getNumber2, put = setNumber2)) int NumberTwo;

	void Addition(int Number1,int Number2) {
		_Cache = Number1 + Number2 + _Cache;
	}
	void SubTraction(int Number1, int Number2) {
		_Cache = Number1 - Number2;
	}
	void SubTraction(int Number1) {
		_Cache = _Cache - Number1;
	}
	void Multi(int Number1, int Number2) {
		if (_Cache == 0)
		{
			if (Number2 == 0)
			{
				_Cache = 0;
			}
			else
			{
				_Cache = Number1 * Number2;
			}
			
		}
		else
		{
			_Cache = Number1 * _Cache;
		}
	}
	void Division(int Number1, int Number2) {
		if (_Cache == 0)
		{
			_Cache = Number1 / Number2;
		}
		else
		{
			_Cache = _Cache / Number1;
		}
	}

	int FinalResualt() {
		return getChache();
	}

};

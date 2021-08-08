
#pragma once

#include "TestOnCorrectSort.h"
#include "Sortings.h"
#include "SpeedTests.h"
#include <iostream>
#include <conio.h>




int main()
{

	//Если проходятся тест на стабильность, то можно тестировать на скорость
	if (UnitTests::RunAllTests())
	{
		int lengthArrays = 10;
		//Установить русский
		setlocale(LC_ALL, "");
		cout << "Введите размер массива для теста скорости: ";
		cin >> lengthArrays;
		cout << endl;
		SpeedTests::RunAllTests(lengthArrays);
	}

	_getch();
}

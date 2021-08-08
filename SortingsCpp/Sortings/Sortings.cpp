
#pragma once

#include "TestOnCorrectSort.h"
#include "Sortings.h"
#include "SpeedTests.h"
#include <iostream>
#include <conio.h>




int main()
{
	//Установить русский
	setlocale(LC_ALL, ".UTF8");

	//Если проходятся тест на стабильность, то можно тестировать на скорость
	if(UnitTests::RunAllTests())
		SpeedTests::RunAllTests();

	_getch();
}

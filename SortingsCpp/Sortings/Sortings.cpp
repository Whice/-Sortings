#ifndef Headermain_H_
#define Headermain_H_
#pragma once

#include "TestOnCorrectSort.h"
#pragma once
#include "Sortings.h"
#include "SpeedTests.h"
#include <iostream>
#include <conio.h>




int main()
{
	//Установить русский
	setlocale(LC_ALL, "Russian");

	//Если проходятся тест на стабильность, то можно тестировать на скорость
	if(UnitTests::RunAllTests())
		SpeedTests::RunAllTests();

	_getch();
}


#endif //Headermain_H_
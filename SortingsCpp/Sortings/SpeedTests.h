
#pragma once

#include <iostream>
#include <vector>
#include "Sortings.h"
#include <chrono>

using namespace std;

class SpeedTests
{
	/// <summary>
	/// «апустить все тесты.
	/// </summary>
	public: static void RunAllTests()
	{
		int lengthArrays = 1'000;
		string message = "";

		message = "Сортировка пузырьком, массив по возрастанию:";
		vector<int> brokenArray = CreateArrayAscending(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);
		message = "Сортировка пузырьком, массив со смешанными значени¤ми:";
		brokenArray = CreateArrayMixed(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);
		message = "Сортировка пузырьком, массив по убыванию:";
		brokenArray = CreateArrayDescending(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);
		
		message = "Сортировка сноской, массив по возрастанию:";
		brokenArray = CreateArrayAscending(lengthArrays);
		TestSpeedSortByFootnote(brokenArray, message);
		message = "Сортировка сноской, массив со смешанными значени¤ми:";
		brokenArray = CreateArrayMixed(lengthArrays);
		TestSpeedSortByFootnote(brokenArray, message);
		message = "Сортировка сноской, массив по убыванию:";
		brokenArray = CreateArrayDescending(lengthArrays);
		TestSpeedSortByFootnote(brokenArray, message);
		


	}


#pragma region Создание массивов для сортировки

	/// <summary>Создание нового массива со значениями по возрастанию.</summary>
	private: static vector<int> CreateArrayAscending(int length)
	{
		vector<int> mas = vector<int>(length);
		for (int i = 0; i < length; ++i)
		{
			mas.push_back(i);
		}
		return mas;
	}
	/// <summary>Создание нового массива со смешанными значениями(чердование отрицательных и положительных чисел).</summary>
	private: static vector<int> CreateArrayMixed(int length)
{
	vector<int> mas = vector<int>(length);
	for (int i = 0; i < length; ++i)
	{
		if (i % 2 == 0)
			mas.push_back(i);
		else
			mas.push_back(-i);
	}
	return mas;
}
	/// <summary>Создание нового массива со значениями по убыванию.</summary>
	private: static vector<int> CreateArrayDescending(int length)
{
	vector<int> mas = vector<int>(length);
	for (int i = length-1; i >=0; --i)
	{
		mas.push_back(i);
	}
	return mas;
}

#pragma endregion

	/// <summary>
	/// Тест скорости сортировки пузырьком
	/// </summary>
	private: static void TestSpeedBubleSort(vector<int> brokenArray, string message)
	{
		//Запомнить время запуска.
		auto start = chrono::system_clock::now();

		brokenArray = Sorting::BubbleSort(brokenArray);

		auto end = chrono::system_clock::now();
		cout << message << endl;
		cout << "¬ыполнение зан¤ло: " << ((chrono::duration<double>)(end - start)).count()<<endl;

	}

/*
Тест скорости сортировки сноской
*/
private: static void TestSpeedSortByFootnote(vector<int> brokenArray, string message)
{
	//Запомнить время запуска.
	auto start = chrono::system_clock::now();

	brokenArray = Sorting::SortByFootnote(brokenArray);

	auto end = chrono::system_clock::now();
	cout << message << endl;
	cout << "¬ыполнение зан¤ло: " << ((chrono::duration<double>)(end - start)).count() << endl;

}

};

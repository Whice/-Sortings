
#pragma once

#include <vector>
#include "Sortings.h"
#include <iostream>

using namespace std;
class UnitTests
{
	/// <summary>
	/// «апустить все тесты.
	/// </summary>
public: static bool RunAllTests()
{
	bool isGoodTesting = true;

	//Задать рамер массива
	int sizeArray = 29;
	int numberOfStart = 0;

	isGoodTesting = isGoodTesting && TestBubbleSort(sizeArray, numberOfStart);
	isGoodTesting = isGoodTesting && TestSortByFootnote(sizeArray, numberOfStart);

	
	if (isGoodTesting)
	{
		cout << "Тестирование пройдено: да\n" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

		/// <summary>
		/// Сравнить массив с правильным(отсортированным).
		/// </summary>
		/// <param name="arrayForTest">Массив, который надо проверить.</param>
		/// <param name="correctArray">Массив, по которому надо проверить.</param>
		/// <returns></returns>
private: static bool ComparisonWithCorrectArray(vector<int> arrayForTest, vector<int> correctArray)
{
	for (int i = 0; i < arrayForTest.size(); i++)
	{
		if (arrayForTest[i] != correctArray[i])
			return false;
	}
	return true;
}


		 /// <summary>
		 /// Протестировать массив, сравнив его с правильно заполненым аналогом.
		 /// </summary>
		 /// <param name="arrayForTest">Массив, который надо проверить.</param>
		 /// <param name="sizeOfArray">Размер аналога.</param>
		 /// <param name="numberOfStart">Число - первый элемент.</param>
		 /// <returns></returns>
private: static bool TestThroughOrderedArray(vector<int> arrayForTest, int sizeOfArray, int numberOfStart)
{
	//заполнить правильный массив в правильно порядке.
	vector<int> correctArray;
	for (int i = numberOfStart; i < numberOfStart + sizeOfArray; i++)
	{
		correctArray.push_back(i);
	}

	bool result = ComparisonWithCorrectArray(arrayForTest, correctArray);

	return result;
}
		 /// <summary>
		 /// Тестирование сортировки пузырьком
		 /// </summary>
private: static bool TestBubbleSort(int sizeArray, int numberOfStart)
{
	//Создать неотсортированный массив
	vector<int> brokenArray;
	for (int i = sizeArray - 1; i >= numberOfStart; i--)
		brokenArray.push_back(i);

	//отсортировать его
	vector<int> notBrokenArray = Sorting::BubbleSort(brokenArray);

	//проверить правильность сортировки
	bool isGoodTesting = TestThroughOrderedArray(notBrokenArray, sizeArray, numberOfStart);

	if (isGoodTesting)
	{
		return true;
	}
	else
	{
		std::cout << "Тестирование сортировки пузырьком пройдено: нет." << endl;
		return false;
	}

}
/*
Тестирование сортировки сноской
*/
private: static bool TestSortByFootnote(int sizeArray, int numberOfStart)
{
	//Создать неотсортированный массив
	vector<int> brokenArray;
	for (int i = sizeArray - 1; i >= numberOfStart; i--)
		brokenArray.push_back(i);

	//отсортировать его
	vector<int> notBrokenArray = Sorting::SortByFootnote(brokenArray);

	//проверить правильность сортировки
	bool isGoodTesting = TestThroughOrderedArray(notBrokenArray, sizeArray, numberOfStart);

	if (isGoodTesting)
	{
		return true;
	}
	else
	{
		std::cout << "Тестирование сортировки сноской пройдено: нет." << endl;
		return false;
	}

}
};


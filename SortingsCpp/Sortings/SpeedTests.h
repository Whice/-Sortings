
#pragma once

#include <iostream>
#include <vector>
#include "Sortings.h"
#include <chrono>

using namespace std;

class SpeedTests
{
	/// <summary>
	/// ��������� ��� �����.
	/// </summary>
	public: static void RunAllTests()
	{
		int lengthArrays = 1'000;
		string message = "";

		message = "���������� ���������, ������ �� �����������:";
		vector<int> brokenArray = CreateArrayAscending(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);
		message = "���������� ���������, ������ �� ���������� ����������:";
		brokenArray = CreateArrayMixed(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);
		message = "���������� ���������, ������ �� ��������:";
		brokenArray = CreateArrayDescending(lengthArrays);
		TestSpeedBubleSort(brokenArray, message);

	}


#pragma region �������� �������� ��� ����������

	/// <summary>�������� ������ ������� �� ���������� �� �����������.</summary>
	private: static vector<int> CreateArrayAscending(int length)
	{
		vector<int> mas = vector<int>(length);
		for (int i = 0; i < length; ++i)
		{
			mas.push_back(i);
		}
		return mas;
	}
	/// <summary>�������� ������ ������� �� ���������� ����������(���������� ������������� � ������������� �����).</summary>
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
	/// <summary>�������� ������ ������� �� ���������� �� ��������.</summary>
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
	/// ���� �������� ���������� ���������
	/// </summary>
	private: static void TestSpeedBubleSort(vector<int> brokenArray, string message)
	{
		//��������� ����� �������.
		auto start = chrono::system_clock::now();

		Sorting::BubbleSort(brokenArray);

		auto end = chrono::system_clock::now();
		cout << message << endl;
		cout << "���������� ������: " << ((chrono::duration<double>)(end - start)).count()<<endl;

	}
};

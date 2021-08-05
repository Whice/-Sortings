
#pragma once

#include <vector>
#include "Sortings.h"
#include <iostream>

using namespace std;
class UnitTests
{
	/// <summary>
	/// ��������� ��� �����.
	/// </summary>
	public: static bool RunAllTests()
	{
		bool isGoodTesting = true;

		//������ ����� �������
		int sizeArray = 29;
		int numberOfStart = 0;

		isGoodTesting= isGoodTesting && TestBubbleSort(sizeArray, numberOfStart);

		if (isGoodTesting)
		{
			cout << "������������ ��������: ��\n" << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	/// <summary>
	/// �������� ������ � ����������(���������������).
	/// </summary>
	/// <param name="arrayForTest">������, ������� ���� ���������.</param>
	/// <param name="correctArray">������, �� �������� ���� ���������.</param>
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
	/// �������������� ������, ������� ��� � ��������� ���������� ��������.
	/// </summary>
	/// <param name="arrayForTest">������, ������� ���� ���������.</param>
	/// <param name="sizeOfArray">������ �������.</param>
	/// <param name="numberOfStart">����� - ������ �������.</param>
	/// <returns></returns>
	private: static bool TestThroughOrderedArray(vector<int> arrayForTest, int sizeOfArray, int numberOfStart)
		{
			//��������� ���������� ������ � ��������� �������.
			vector<int> correctArray;
			for (int i = numberOfStart; i < numberOfStart + sizeOfArray; i++)
			{
				correctArray.push_back(i);
			}

			bool result = ComparisonWithCorrectArray(arrayForTest, correctArray);

			return result;
		}
	/// <summary>
	/// ������������ ���������� ���������
	/// </summary>
	private: static bool TestBubbleSort(int sizeArray, int numberOfStart)
	{
		//������� ����������������� ������
		vector<int> brokenArray;
		for (int i = sizeArray - 1; i >= numberOfStart; i--)
			brokenArray.push_back(i);

		//������������� ���
		vector<int> notBrokenArray = Sorting::BubbleSort(brokenArray);

		//��������� ������������ ����������
		bool isGoodTesting = TestThroughOrderedArray(notBrokenArray, sizeArray, numberOfStart);

		if (isGoodTesting)
		{
			return true;
		}
		else
		{
			std::cout << "������������ ��������: ���." << endl;
			return false;
		}

	}
	};


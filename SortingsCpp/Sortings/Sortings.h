
#pragma once

#include <vector>

using namespace std;
///<summary>
/// Класс содержащий сортировки и функции для них.
///</summary>
class Sorting
{
		///<summary>
		/// Функция обмена значениями.
		///</summary>
	private: static  vector<int> Swap(vector<int> arrayForSwap, int i, int j)
		{
			int buffer = arrayForSwap[i];
			arrayForSwap[i] = arrayForSwap[j];
			arrayForSwap[j] = buffer;

			return arrayForSwap;
		}

	///<summary>
	/// Пузырьковая сортировка
	///</summary>
	public: static vector<int> BubbleSort(vector<int> arrayForSort)
	{
		int size = arrayForSort.size();
		for (int i = 0; i < size; i++)
			for (int j = i + 1; j < size; j++)
			{
				if (arrayForSort[i] > arrayForSort[j])
					arrayForSort = Swap(arrayForSort, i, j);
			}

		return arrayForSort;
	}
};

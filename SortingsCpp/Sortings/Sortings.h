
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
	/*
	Сортировка сноской
	@args:
	arrayForSort - массив для сортировки
	*/
	public: static vector<int> SortByFootnote(vector<int> arrayForSort)
	{
		// Позиция проверяемого элемента
		int lastCheckItem = 1;
		//обычный счетчик (i всегда место элемента, который стоит до проверяемого)
		int i = lastCheckItem-1;
		while (lastCheckItem < arrayForSort.size())
		{
			//Найти куда его поставить, "передняя" часть массива уже будет сортированая всегда
			while (i > -1 && arrayForSort[i+1] < arrayForSort[i])
			{
				//Поменять местами с предыдущим
				arrayForSort = Swap(arrayForSort, i , i+1);
				--i;
			}

			//перейти к следущему элементу.
			i = lastCheckItem;
			++lastCheckItem;
		}
		return arrayForSort;
	}
};

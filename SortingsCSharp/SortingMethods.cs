using System.Collections.Generic;

namespace Sortings
{
    public static class SortingMethods
    {
        static int[] Swap(int[] targetArray, int i, int j)
        {
            int buffer = targetArray[i];
            targetArray[i] = targetArray[j];
            targetArray[j] = buffer;

            return targetArray;
        }


        public static int[] BubbleSort(int[] targetArray)
        {
            int size = targetArray.Length;
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    if (targetArray[i] > targetArray[j])
                    {
                        targetArray = Swap(targetArray, i, j);
                    }
                }
            }
            return targetArray;
        }
        //Сортировка расческой (Модифицированный пузырек)
        //При работе сортировки расстояние между перемещаемыми элементами
        //постепенно уменьшается, пока не станет равно 1, как в пузырьке.
        public static int[] CombSort(int[] targetArray)
        {
            //Коэффициент уменьшения расстояния
            double factor = 1.2473309;

            //Первоначальное расстояние
            int distance = targetArray.Length - 1;

            while (distance >= 1)
            {
                for (int i = 0; i + distance < targetArray.Length; i++)
                {
                    if (targetArray[i] > targetArray[i+distance])
	                {
                        Swap(targetArray,i,i+distance);
	                }
                }
                distance = (int)(distance / factor);
            }
            return targetArray;
        }
    }
}

using System.Collections.Generic;

namespace Sortings
{
    public static class SortingMethods
    {
        static List<int> Swap(List<int> targetArray, int i, int j)
        {
            int buffer = targetArray[i];
            targetArray[i] = targetArray[j];
            targetArray[j] = buffer;

            return targetArray;
        }

        static int[] Swap(int[] targetArray, int i, int j)
        {
            int buffer = targetArray[i];
            targetArray[i] = targetArray[j];
            targetArray[j] = buffer;

            return targetArray;
        }

        public static List<int> BubbleSort(List<int> targetArray)
        {
            int size = targetArray.Count;
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

        public static int[] BubbleSort(int[] targetArray)
        {
            int size = targetArray.GetLength(0);
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
    }
}

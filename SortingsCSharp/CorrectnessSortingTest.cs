using System.Collections.Generic;

namespace Sortings
{
    public static class CorrectnessSortingTest
    {
        static bool ComparisonWithCorrectArray(List<int> targetArray, List<int> correctArray)
        {
            for (int i = 0; i < targetArray.Count; i++)
            {
                if (targetArray[i] != correctArray[i])
                    return false;
            }
            return true;
        }

        static bool ComparisonWithCorrectArray(int[] targetArray, int[] correctArray)
        {
            for (int i = 0; i < targetArray.Length; i++)
            {
                if (targetArray[i] != correctArray[i])
                    return false;
            }
            return true;
        }

        public static bool TestThroughOrderedArray(List<int> targetArray, int arraySize, int startPosition)
        {
            List<int> correctArray = new();
            for (int i = startPosition + 1; i < startPosition + arraySize; i++)
            {
                correctArray.Add(i);
            }

            return ComparisonWithCorrectArray(targetArray, correctArray);
        }

        public static bool TestThroughOrderedArray(int[] targetArray, int arraySize, int startPosition)
        {
            int[] correctArray = new int[arraySize];
            for (int i = startPosition + 1; i < startPosition + arraySize; i++)
            {
                correctArray[i]=i;
            }

            return ComparisonWithCorrectArray(targetArray, correctArray);
        }
    }
}

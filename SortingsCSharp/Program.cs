using System;
using System.Diagnostics;

namespace Sortings
{
    class Program
    {
        static void Main(string[] args)
        {
            //Создание таймера
            Stopwatch sw = new();

            int arraySize = 1_000_000_000;
            int startPosition = 0;

            int[] unorderedArray = new int[arraySize];
            for (int i = arraySize-1; i > startPosition; i--)
            {
                unorderedArray[arraySize-i] = i;
            }

            sw.Start();

            int[] orderedArray = SortingMethods.CombSort(unorderedArray);

            sw.Stop();

            bool testValid = CorrectnessSortingTest.TestThroughOrderedArray(orderedArray, arraySize, startPosition);

            if (testValid) Console.WriteLine("Test finished!");
            else Console.WriteLine("Test failed!");

            #if DEBUG
            arraySize = 100;
            for (int i = 0; i < arraySize-1; i++)Console.Write(orderedArray[i] + "; ");
            #endif


            Console.WriteLine("\nTime to sort " + arraySize + " elements : "  + sw.Elapsed);
            Console.ReadKey();
        }
    }
}

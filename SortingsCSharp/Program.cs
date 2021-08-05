using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace Sortings
{
    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch sw = new();

            int arraySize = 1000000;
            int startPosition = 0;

            //List<int> unorderedArray = new();
            int[] unorderedArray = new int[arraySize];
            for (int i = arraySize-1; i > startPosition; i--)
            {
                unorderedArray[arraySize-i] = i;
            }

            sw.Start();

            //List<int> orderedArray = SortingMethods.BubbleSort(unorderedArray);
            int[] orderedArray = SortingMethods.BubbleSort(unorderedArray);

            sw.Stop();

            bool testValid = CorrectnessSortingTest.TestThroughOrderedArray(orderedArray, arraySize, startPosition);

            if (testValid) Console.WriteLine("Test finished!");
            else Console.WriteLine("Test failed!");

            //for (int i = 0; i < arraySize-1; i++)Console.Write(orderedArray[i] + "; ");
                

            Console.WriteLine("\nTime to sort " + arraySize + " elements : "  + sw.Elapsed);
            Console.ReadKey();
        }
    }
}

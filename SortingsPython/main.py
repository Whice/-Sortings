import time
from sorting_methods import SortingMethods
from correctness_sorting_test import SortingTests


list_size = 1000
start_position = 0

unordered_list = [i for i in range(list_size, start_position, -1)]

start = time.time()
ordered_list = SortingMethods.bubble_sort(unordered_list)
print('Время выполнения:', time.time() - start)

test_valid = SortingTests.test_through_ordered_array(
    ordered_list, list_size, start_position)

print('Test passed!') if test_valid else print('Test failed!')

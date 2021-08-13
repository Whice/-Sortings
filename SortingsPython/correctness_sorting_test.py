from sorting_methods import SortingMethods


class SortingTests:

    def comparasion_with_correct_list(target_list: list, correct_list: list) -> bool:
        for i in range(len(target_list) - 1):
            if target_list[i] != correct_list[i]:
                return False
        return True


    def test_through_ordered_array(target_list: list, list_size: int, start_position: int) -> bool:
        correct_list = []

        for i in range(start_position + 1, start_position + list_size):
            correct_list.append(i)

        return SortingTests.comparasion_with_correct_list(target_list, correct_list)

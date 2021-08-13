def comparasion_with_correct_list(target_list, correct_list):
    for i in range(len(target_list) - 1):
        if target_list[i] != correct_list[i]:
            return False
    return True


def test_through_ordered_array(target_list, list_size, start_position):
    correct_list = []

    for i in range(start_position + 1, start_position + list_size):
        correct_list.append(i)

    return comparasion_with_correct_list(target_list, correct_list)

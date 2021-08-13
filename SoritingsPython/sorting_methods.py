def swap(target_list, i, j):
    target_list[i], target_list[j] = target_list[j], target_list[i]


def bubble_sort(target_list):
    for i in range(len(target_list)):
        for j in range(i + 1, len(target_list)):
            if target_list[i] > target_list[j]:
                swap(target_list, i, j)
    return target_list

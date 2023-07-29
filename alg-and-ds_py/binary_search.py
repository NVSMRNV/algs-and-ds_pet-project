def binary_search(array: list[int], item: int) -> int:
    lhs, rhs = 0, len(array) - 1
    while lhs <= rhs:
        mid = (lhs + rhs) // 2
        if array[mid] == item:
            return mid
        if array[mid] > item:
            rhs = mid - 1
        else:
            lhs = mid + 1
    return None

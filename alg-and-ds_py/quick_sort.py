def quick_sort(array: list[int]) -> list[int]:
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        lhs = [item for item in array[1:] if item <= pivot]
        rhs = [item for item in array[1:] if item > pivot]
        return quick_sort(lhs) + [pivot] + quick_sort(rhs)

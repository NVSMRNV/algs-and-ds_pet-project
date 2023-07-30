def recursive_sum(array: list[int]) -> int:
    index = 0
    while index < len(array):
        if not array:
            return 0
        else:
            index += 1
            return array[index - 1] + recursive_sum(array[index:])
        
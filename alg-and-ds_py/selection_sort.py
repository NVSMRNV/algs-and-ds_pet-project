def selection_sort(sequence: list[int]) -> None:
    for lhs_index in range(len(sequence)):
        minimum = sequence.index(min(sequence[lhs_index:]))
        sequence[lhs_index], sequence[minimum] = sequence[minimum], sequence[lhs_index]   

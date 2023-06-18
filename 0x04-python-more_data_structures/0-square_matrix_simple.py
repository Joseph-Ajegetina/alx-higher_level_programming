#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    """Sums the elements in the maxtrix"""
    result_matrix = []
    for row in matrix:
        # Return square of element using a map and lambda function on each row
        square_row = list(map(lambda elem: elem*elem, row))
        result_matrix.append(square_row)

    return result_matrix

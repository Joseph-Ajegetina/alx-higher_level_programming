#!/usr/bin/python3

def only_diff_elements(set_1, set_2):
    """ return the difference in the two sets"""
    different_elements = set_1 ^ set_2
    return list(different_elements)

#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    """ multiply values by 2"""
    result = {}
    for key in a_dictionary.keys():
        value = a_dictionary[key]
        result[key] = value * 2

    return result

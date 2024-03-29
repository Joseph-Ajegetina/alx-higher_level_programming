#!/usr/bin/python3
# -*- coding: utf-8 -*-


def complex_delete(a_dictionary, value):
    ''' remove an element based on the value '''

    keys_to_delete = [key for (key, val) in a_dictionary.items() if val == value]
    for key in keys_to_delete:
        del a_dictionary[key]
    return a_dictionary

#!/usr/bin/python3
# -*- coding: utf-8 -*-


def best_score(a_dictionary):
    """ return key with biggest integer value"""

    if not a_dictionary:
        return None

    max_key = max(a_dictionary, key=a_dictionary.get)
    return max_key

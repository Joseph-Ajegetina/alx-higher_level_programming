#!/usr/bin/python
# -*- coding: utf-8 -*-


def search_replace(my_list, search, replace):
    """ Find the element search in my_list and replace with replace"""

    elem_list = my_list[:]

    # Itereate over the list

    for i in range(len(elem_list)):
        if elem_list[i] == search:
            elem_list[i] = replace

    return elem_list

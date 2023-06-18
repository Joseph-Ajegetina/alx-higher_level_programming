#!/usr/bin/python3

def weight_average(my_list=[]):
    ''' Returns the weighted average of items in the list'''
    if (len(my_list) == 0):
        return 0
    total = 0
    total_weights = 0
    for score_item in my_list:
        total += score_item[0] * score_item[1]
        total_weights += score_item[1]
    return total/total_weights


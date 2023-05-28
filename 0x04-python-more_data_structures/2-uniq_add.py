#!/usr/bin/python3

def uniq_add(my_list=[]):
  """ Adds all unique integers in my_list"""
  # getting unique elements 
  unique_integers = set(my_list)
  return sum(unique_integers)

#!/usr/bin/python3


def common_elements(set_1, set_2):
  """Return the common elements in the two sets"""
  common_elements = set_1.intersection(set_2)
  return list(common_elements)

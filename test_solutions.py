"""
Test Solution to List Comprehensions
"""

import pytest

from solutions import hello_world, if_odd, sum_diff_prod, division, loops, is_leap, print_list, wrap


def test_hello_world():
    res = hello_world()
    assert res == "Hello, World!"

def test_if_odd():
    res = if_odd(3)
    assert res == "Weird"

    res = if_odd(24)
    assert res == "Not Weird"

def test_sum_diff_prod():
    res = sum_diff_prod(3, 2)
    assert res == (5, 1, 6)

def test_division():
    res = division(4, 3)
    assert res == (1, 1.3333333333333333)

def test_loops():
    res = loops(5)
    assert res == [0, 1, 4, 9, 16]

def test_is_leap():
    res = is_leap(1990)
    assert res == False

def test_print_list():
    res = print_list(3)
    assert res == "123"

def test_wrap():
    res = wrap("ABCDEFGHIJKLIMNOQRSTUVWXYZ", 4)
    assert res == 'ABCD\nEFGH\nIJKL\nIMNO\nQRST\nUVWX\nYZ'

def main():
    """
    Run Tests
    """
    pytest.main()

if __name__ == "__main__":
    main()

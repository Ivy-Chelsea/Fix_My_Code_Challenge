#!/usr/bin/python3
"""FizzBuzz"""
import sys


def fizzbuzz(n):
    """
    Fizzbuzz function prints numbers from 1 to n seperated by a space
    Print Fizz for multiples of three instead of the number and Buzz for 5
    For multiples of both 5 and 3 peint FizzBuzz
    """
    if n < 1:
        return

    tmp_result = []
    for i in range(1, n +1):
        if (i % 3) == 0 and (i % 5) == 0:
            tmp_result.append("FizzBuzz")
        elif (i % 3) == 0:
            tmp_result.append("Fizz")
        elif (i % 5) == 0:
            tmp_result.append("Buzz")
        else:
            tmp_result.append(str(i))
    print(" ".join(tmp_result))


if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("Missing number")
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = int(sys.argv[1])
    fizzbuzz(number)

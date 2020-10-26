"""
Binary search algorithm using Python language that:
first sort the numeric list
then, search the input value from the sorted list by binary search algorithm
display result based on the search result.
"""

def binary_search(a_list, item):
    first = 0
    last = len(a_list) - 1
    found = False
    count = -1

    while first <= last and not found:
        midpoint = (first + last)//2
        if a_list[midpoint] == item:
            count += 1
            found = True
        else:
            if item < a_list[midpoint]:
                last = midpoint - 1
            else:
                first = midpoint + 1

    return count

L = [
    44, 101, 23,
    44, 93, 10,
    87, 303, 210,
    2
    ]
L.sort()

position = int(input("Enter an interger to search from list : "))
result = binary_search(L, position)

if result == -1:
    print("The search is not found!")
else:
    print("The search result is exists in", result + 1, "times")


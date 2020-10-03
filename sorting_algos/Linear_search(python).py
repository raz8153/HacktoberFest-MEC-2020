#Linear search an array using Python.

data = []
num = int(input('Enter how many elements you want: '))

for i in range(0, num):
    x = input('Enter the numbers into the array: ')
    data.append(int(x))

def linearSearch(array, n, x):
    # Going through array sequencially
    for i in range(0, n):
        if (array[i] == x):
            return i
    return -1

x = input("Enter number to be searched: ")
result = linearSearch(data, num, x)
if(result == -1):
    print("Element not found")
else:
    print("Element found at index: ", result)

# Python program for implementation of Bubble Sort

def bubbleSort(array):
	n = len(array)

	# Traverse through all array elements
	for i in range(n-1):
	# range(n) also work but outer loop will repeat one time more than needed.

		# Last i elements are already in place
		for j in range(0, n-i-1):

			# traverse the array from 0 to n-i-1
			# Swap if the element found is greater
			# than the next element
			if array[j] > array[j+1] :
				array[j], array[j+1] = array[j+1], array[j]

# Driver code to test above
array = [64, 34, 25, 12, 22, 11, 90]

bubbleSort(array)

print ("Sorted array is:")
for i in range(len(array)):
	print ("%d" %array[i]),

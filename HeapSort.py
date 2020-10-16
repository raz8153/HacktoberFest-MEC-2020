# Assume the index of the largest element is the root index
# If the left child of the root is a valid index, and the element is greater
# than the current largest element, then update the largest element
# Do the same for the right child of the root
# If the largest element is no longer the root element, swap them
# Heapify the new root element to ensure it's the largest
# Create a Max Heap from the list
# The 2nd argument of range means we stop at the element before -1 i.e.
# the first element of the list.
# The 3rd argument of range means we iterate backwards, reducing the count
# of i by 1
# Move the root of the max heap to the end of
# Verify it works
def heapify(nums, heap_size, root_index):
    largest = root_index
    left_child = (2 * root_index) + 1
    right_child = (2 * root_index) + 2

    if left_child < heap_size and nums[left_child] > nums[largest]:
        largest = left_child

    if right_child < heap_size and nums[right_child] > nums[largest]:
        largest = right_child

    if largest != root_index:
        nums[root_index], nums[largest] = nums[largest], nums[root_index]
        heapify(nums, heap_size, largest)
        
def heap_sort(nums):
    n = len(nums)
    for i in range(n, -1, -1):
       heapify(nums, n, i)
    for i in range(n - 1, 0, -1):
        nums[i], nums[0] = nums[0], nums[i]
        heapify(nums, i, 0)

random_list_of_nums = [35, 12, 43, 8, 51]
heap_sort(random_list_of_nums)
print(random_list_of_nums)

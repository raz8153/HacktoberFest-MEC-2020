# Python program for implementation of Merge Sort

def merge_sort(unsorted_list, start, end):
    if end-start>1:
        mid=(start+end) // 2
        merge_sort(unsorted_list, start, mid)
        merge_sort(unsorted_list, mid, end)
        merge_list(unsorted_list, start, mid, end)
 
def merge_list(unsorted_list, start, mid, end):
    left=unsorted_list[start:mid]
    right=unsorted_list[mid:end]
    i=0
    j=0
    k=start
    while(start+i<mid and mid+j<end):
        if(left[i]<=right[j]):
            unsorted_list[k]=left[i]
            i=i+1
        else:
            unsorted_list[k]=right[j]
            j=j+1
        k=k+1
    if start+i<mid:
        while k<end:
            unsorted_list[k]=left[i]
            i=i+1
            k=k+1
    else:
        while k<end:
            unsorted_list[k]=right[j]
            j=j+1
            k=k+1
 
 
unsorted_list = input('Enter the numbers to be sorted using merge sort : ').split()

unsorted_list = [int(x) for x in unsorted_list]
merge_sort(unsorted_list, 0, len(unsorted_list))

print(unsorted_list)
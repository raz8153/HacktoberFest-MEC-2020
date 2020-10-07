/*  Java program to perform Insertion Sort
    Insertion sort -  The array is virtually split into a sorted and an unsorted part.
    Values from the unsorted part are picked and placed at the correct position in the sorted part. 
*/
class InsertionSort {
    void sortArray(int arr[], int n) {
        int i, j;
        for (i = 1; i < n; i++) {
            int element = arr[i];
            j = i - 1;
            while (j >= 0 && element < arr[j]) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = element;
        }
    }

    static void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }

    public static void main(String[] args) {
        int arr[] = { 2, 10, 12, 14, 6, 1, 9, 25 };
        int n = arr.length;
        System.out.println("\nOriginal array : ");
        printArray(arr, n);
        InsertionSort ob = new InsertionSort();
        ob.sortArray(arr, n);
        System.out.println("\n\nArray after sorting : ");
        printArray(arr, n);
    }
}
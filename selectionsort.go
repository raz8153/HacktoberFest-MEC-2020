//Code in Golang for selection sort
package main

import "fmt"
//Function for selection sort
func selectionSort(numbers []int) []int {

	var mid_index int;

	for i := 0; i < len(numbers); i++ {

		mid_index = i

		for j := i + 1; j < len(numbers); j++ {
			if numbers[j] < numbers[mid_index] {
				mid_index = j
			}
		}

		temp := numbers[mid_index]
		numbers[mid_index] = numbers[i]
		numbers[i] = temp
	}

	return numbers
}

// main function
func main() {

	fmt.Println("Selection Sort \n")

	// creating an integer array with values
	number := []int{2, 1, 4, 6, 5, 3, 8, 7, 10, 9}

	fmt.Println("Before Sorting:", number)

	// calling the selectionSort function
	number = selectionSort(number)

	fmt.Println("\nAfter Sorting:", number)
}

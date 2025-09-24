/* 
Write a C program that takes an array of integers and separates the numbers into two arrays:
one containing all even numbers, and the other containing all odd numbers.
Then, print the two arrays in reverse order using only pointer arithmetic (no indexing).

Author: Meher Chaitanya
Date: 24/09/25
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	printf("Enter size of array you would like to input: ");
	scanf("%d", &n);

	if (n < 1) { // guard clause
		printf("Please choose a size greater than 0.\n");
		exit(1);
	}

    int arr[n];
    printf("Enter %d value(s):\n", n);
    for (int i=0; i<n; i++) { // take n inputs
        scanf("%d", &arr[i]);
    }

    int even_arr[n], odd_arr[n];
    
}

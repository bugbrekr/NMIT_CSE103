/*
Question 4:
Write a C function that takes an array of integers and its size, then
returns the length of the longest contiguous subarray where the difference
between consecutive elements is exactly 1 or -1.

Example:
Input: [2, 3, 4, 3, 2, 1, 2]
Output: 5 (for the subarray [4, 3, 2, 1, 2])

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

    int l = 1; // length of longest contiguous subarray = 1 (always minimum)
    for (int i=1; i<n; i++) {
        if (abs(arr[i]-arr[i-1]) == 1) { // check if difference is 1 or -1
            l += 1; // increment by 1
        } else {
            l = 1; // reset to 1
        }
    }
    printf("Length of longest contiguous subarray: %d\n", l);
}
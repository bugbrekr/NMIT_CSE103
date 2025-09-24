/* 
Question 5:
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
	printf("Enter the size of array you would like to input: ");
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
    int e_i=0, o_i=0; // hold indices for even_arr and odd_arr
    for (int i=0; i<n; i++) {
        if (arr[i]%2==0) { // check if even
            even_arr[e_i] = arr[i]; // append to even_arr
            e_i++;
        } else {
            odd_arr[o_i] = arr[i]; // append to odd_arr
            o_i++;
        }
    }

    printf("Even numbers: ");
    int *e_pt = even_arr; // get pointer of first element in even_arr
    for (int i=0; i<e_i; i++) {
        printf("%d ", *(e_pt+i)); // get value of any element in even_arr using pointer
    }
    printf("\n");
    
    printf("Odd numbers: ");
    int *o_pt = odd_arr; // get pointer of first element in odd_arr
    for (int i=0; i<o_i; i++) {
        printf("%d ", *(o_pt+i)); // get value of any element in odd_arr using pointer
    }
    printf("\n");
}
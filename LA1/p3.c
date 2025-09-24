/*
Question 3:
Write a C program to print the first n numbers in the Fibonacci sequence
using a for loop, but without using any additional variables except for
the current and previous two numbers.

Author: Meher Chaitanya
Date: 24/09/25
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
	int n;
	printf("Enter number of Fibonacci numbers to generate: ");
	scanf("%d", &n); // take int input

	if (n < 1) { // guard clause to check if input not natural number
		printf("Please enter a count greater than 0.\n");
		exit(1); // exit with error
	}

    long p=0, q=1, c=p;
    for (int i=0; i<n; i++) { // iterate n times
        printf("%ld\n", c);
        c = p+q;
        p = q;
        q = c;
    }
}
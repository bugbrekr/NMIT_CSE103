/*
Write a function in C that takes an integer n and returns:
  * "Prime" if n is a prime number,
  * "Perfect Square" if n is a perfect square,
  * "Neither" otherwise.
Your program should handle edge cases (e.g., n <= 1) correctly.

Author: Meher Chaitanya
Date: 24/09/25
*/

#include<stdio.h>
#include<stdlib.h>

char * analyze_number(int n) {
	int is_prime = 1; // prime if no factor found
	for (int i=2; i<=n/2; i++) {
		if (n%i==0) {
			is_prime = 0; // factor found, composite
		}
	}

	if (is_prime) {
		return "Prime"; // return if prime, cannot be perfect square
	}

	int is_perfect_square = 0; // not perfect square by default
	for (int i=2; i<=n/2; i++) {
		if (i*i==n) {
			is_perfect_square = 1; // perfect square if i^2 == n
			break;
		}
	}

	if (is_perfect_square) {
		return "Perfect Square"; // return if perfect square
	} else {
		return "Neither"; // return if neither prime nor perfect square
	}
}

void main() {
	int n;
	printf("Enter an number: ");
	scanf("%d", &n); // take int input

	if (n <= 1) { // guard clause to check for edge case
		printf("Please enter a number greater than 1.\n");
		exit(1); // exit with error
	}

	printf("Result: %s\n", analyze_number(n)); // run function and print output
}

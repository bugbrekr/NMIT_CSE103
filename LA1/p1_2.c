/* 
Write a C program that swaps two integer variables without using a third variable or arithmetic operators (+, -, *, /).
Use bitwise operators to achieve the swap.

Author: Meher Chaitanya
Date: 24/09/25

Version 2 - Recursive Function Method
*/

#include<stdio.h>

int add(int a, int b) {
	// Recursive implementation of bitwise addition
	if (b == 0) {
		return a;
	}
	// Bitwise implementation of logic gate equivalent of addition
	return add(a^b, (a&b)<<1);
}

int sub(int a, int b) {
	// Recursive implementation of bitwise subtraction
	if (b == 0){
		return a;
	}
	// Bitwise implementation of logic gate equivalent of subtraction
	return sub(a^b, (~a&b)<<1);
}

void main() {
	int a = 7;
	int b = 10;

	printf("%d %d\n", a, b); // OUT: 7 10
	
	/*
	The following is a bitwise emulation of:
		a = a + b
		b = a - b
		a = a - b
	*/

	a = add(a, b);
	b = sub(a, b);
	a = sub(a, b);
	
	printf("%d %d\n", a, b); // OUT: 10 7
}

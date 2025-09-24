/* 
Write a C program that swaps two integer variables without using a third variable or arithmetic operators (+, -, *, /).
Use bitwise operators to achieve the swap.

Author: Meher Chaitanya
Date: 24/09/25

Version 1 - The Black Magic Method
*/

#include<stdio.h>

void main() {
	// Warning: Works only with integers < 65536 (half int size)
	int a = 7;
	int b = 10;

	printf("%d %d\n", a, b); // OUT: 7 10

	// left-shift `a` by half of int size (4*8) to make space for `b` insertion
	a = a << 2*8;
	// insert `b` into right-end of `a`
	a = a | b;
	// right-shift (undo) `a` to get back original `a` and assign to `b`
	b = a >> 2*8;
	// perform black magic to clear left-half of `a` to keep only value of `b`
	a = a & ~(2*8-1 << 2*8);
	
	printf("%d %d\n", a, b); // OUT: 10 7
}

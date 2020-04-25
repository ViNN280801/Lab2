#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int a = 5;
short b = 8;
float c = 25.34;

int main(int agrc, char* argv[]){
	int val;
	printf("\nint val = %d\tsizeof = %d bytes\n", val, sizeof(val));
	printf("int a = %d\tsizeof = %d bytes\n", a, sizeof(a));
	printf("short b = %d\tsizeof = %d bytes\n", b, sizeof(b));
	printf("float c = %f\tsizeof = %d bytes\n", c, sizeof(c));

	val = 16487;
	a = -47;
	b = 5;
	c = 2.718281828;

	std::cin.get();

	printf("New values:\n");
	printf("int val = %d\tsizeof = %d bytes\n", val, sizeof(val));
	printf("int a = %d\tsizeof = %d bytes\n", a, sizeof(a));
	printf("short b = %d\tsizeof = %d bytes\n", b, sizeof(b));
	printf("float c = %f\tsizeof = %d bytes\n", c, sizeof(c));

	std::cin.get();

	return EXIT_SUCCESS;
}

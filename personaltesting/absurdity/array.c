// C Program to change an Array in function
#include <stdio.h>

// here 'm' is the formal argument
void addval(int m[])
{
	int i;
	for (i = 0; i < 5; i++) {
	
		// adding 10 value to each element
		// of an array
		m[i] = m[i] + 10;
	}
}
// here 'm' is the formal argument
void dis(int m[])
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", m[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = { 11, 12, 13, 14, 15 };

	printf("Array before function call\n");
	// function call
	dis(a);

	// calling addval function
	addval(a);

	printf("Array after function call\n");

	dis(a);
}

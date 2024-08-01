#include <stdio.h>

int main(void)
{
	int age = 21;
	int *pAge = &age;

	printf("address of age: %p\n", &age);
	printf("value of age: %d\n", age);
	printf("value of pAge: %p\n", pAge);
	printf("value at stored address *pAge: %d\n", *pAge);
	printf("size of age: %p bytes\n", sizeof(age));
	printf("size of pointer pAge: %p bytes\n", sizeof(pAge));
	printf("size of value at stored address(*pAge): %p bytes\n", sizeof(*pAge));
}
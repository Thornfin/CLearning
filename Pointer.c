#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int age = 30;
	int *Page = &age;

	printf("adress: %p\n", &Page);
	printf("Age: %d.", *Page);
	
	return 0;

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number1;
	int number2;
	int result;
		
	printf("Enter the first number: ");
	scanf("%d", &number1);
	printf("Enter the second nnumber: ");
	scanf("%d", &number2);
	
	result = number1 + number2; 

	printf("the addition of both numbers is %d.", result); 

	return 0;
}

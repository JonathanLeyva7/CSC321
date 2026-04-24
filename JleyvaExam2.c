//Jonathan Leyva
//CSC321
//Exam2

#include <stdio.h>
#include <stdlib.h>

void name(int number);

int main(void)
{
	int n = 0;

	printf("Enter a number: ");
	scanf("%d", &n);
	
	name(n);

	return EXIT_SUCCESS;
}
void name(int number)
{
	char name[] = "Jonathan";
	int i;

	for(i = 0; i < 8; i++)
	{
		printf("\n%s%d\n", name, number);
	}
	
}

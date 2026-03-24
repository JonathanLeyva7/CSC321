//Jonathan Leyva
//CSC 321
//Lab#9

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL));
	int rando = 1 + rand()%20;
	int guess = 0;
	int i;

	printf("guess a number between 1 and 20 :");
	scanf("%d", &guess);
	
	while(guess > 20 || guess < 1)
	{
		if(guess > 20)
		{
			printf("Number was too high, try again!");
		}
		else
		{
			printf("Number was too low, try again!");
		}
		printf("\nguess a number between 1 and 20 :");
		scanf("%d", &guess);	
	}

	if(guess == rando)
	{
		for(i = 0;i < rando; i++)
		{
			printf("\nYOU GUESSED RIGHT!!!");
		}
	}
       	else
	{
		printf("Sorry you guessed wrong, the answer was %d", rando);
	}	

	return EXIT_SUCCESS;
}

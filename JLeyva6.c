//Jonathan Leyva
//CSC321
//Lab#6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x = 3;
	double y = 5.5;

	printf("%f\n",((x+y*x)/(y-x)));
	printf("%f\n",((-x-y)/(x*y+x)));
 	printf("%f\n",((x+y-x)/y));

	return EXIT_SUCCESS;	
}

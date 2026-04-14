//Jonathan Leyva
//CSC321
//Lab11

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypo(double base, double height);

int main(void)
{
	double B;
	double H;


	printf("Enter the base of the triangle: ");
	scanf("%lf", &B);

	printf("Enter the height of the triangle: ");
        scanf("%lf", &H);

	double triangleH = hypo(B, H);
	
	printf("The hypotenuse of the Triangle is %f", triangleH);


	return EXIT_SUCCESS;
}

double hypo(double base, double height)
{
	return sqrt((base * base)+(height * height));
}

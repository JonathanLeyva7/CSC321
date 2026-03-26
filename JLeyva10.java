//Jonathan Leyva
//CSC 321
//Lab 10

import java.util.Scanner;

public class JLeyva10
{
	public static void main(String[] args)
	{
		double radius = 0;
		double height = 0;
		
		Scanner user = new Scanner(System.in);
		
		System.out.print("Enter the Radius: ");
		radius = user.nextDouble();

		System.out.print("Enter the height: ");
                height = user.nextDouble();
		
		System.out.println("The volume of the cylender is " + cv(radius, height));

	}

	public static double cv(double r, double h)
	{
		return Math.PI * (r*r) * h;
	}
}

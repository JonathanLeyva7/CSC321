//Jonathan Leyva
//CSC321
//Lab 9

import java.util.Scanner;
import java.util.Random;

public class JLeyva9
{
	public static void main(String[] args)
	{
		int guess = 0;

		Random random = new Random();
		int r = random.nextInt(20)+1;
		
		Scanner user = new Scanner(System.in);
		System.out.print("guess a number between 1 and 20 : ");
		guess = user.nextInt();
		
		while(guess > 20 || guess < 1) 
		{
			if(guess > 20)
			{
				System.out.println("\nNumber was too high, try again!");
			}else  System.out.println("\nNumber was too low, try again!");

			System.out.print("\nguess a number between 1 and 20 : ");
                	guess = user.nextInt();
		}
		
		if(guess == r)
		{
			for(int i = 0; i < r; i++)
			{
				System.out.println("YOU GUESSED RIGHT!!!");
			}
		}
		else System.out.println("Sorry you guessed wrong, the answer was " + r);
	}	
}

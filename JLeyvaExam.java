//Jonathan Leyva
//Exam-1
//CSS 321

import java.util.Scanner;

public class JLeyvaExam 
{
	public static void main (String [] args)
	{
	int x = 15;

	Scanner user = new Scanner(System.in);
	System.out.print("Pick a number: ");
	int num = user.nextInt();

	if(num  < x)
	{
	System.out.println("Number guessed was lower " + x);
	}
	else if(num > x)
	{
	System.out.println("Number guessed was higher than " + x);
	}

	if(x == num)
	{
	System.out.println("YOU GUESSED RIGHT :)");
	}
	else System.out.println("YOU GUESSED WRONG :(");
	}
}

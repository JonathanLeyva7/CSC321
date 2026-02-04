//Jonathan Leyva 
//
//
//CSC321 LAB-4
//
import java.util.Scanner;
public class Jleyva4 
{
	public static void main(String[] args)
	{
		Scanner user = new Scanner(System.in);

		System.out.println("Pick a number\n1 - if you love this class\n2 - if you ate a burger today\n3 - if you like to code\n4 - just an option");
		int op = user.nextInt();

		if(op == 1)
		{
			System.out.println("That is true!");
		}
		else if(op == 2)
		{
			System.out.println("Hey me too!!");
		}
		else if(op == 3)
		{
			System.out.println("That a lie!!!");
		}
		else if (op == 4)
		{
			System.out.println("This is to meet the assignment requirement!!!!");
		}
		
		System.out.println("OKAY BYE!!!!!");
	}
}

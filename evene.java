package console;
import java.io.*;
import java.util.Scanner;
public class greatest {
public static void main(String args[])
{
	Scanner s=new Scanner(System.in);
	System.out.println("Enter the value of a:");
	int a=s.nextInt();
	System.out.println("Enter the value of b:");
	int b=s.nextInt();
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
			System.out.println("even is"+i);
	}
}
}

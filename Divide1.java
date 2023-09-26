import java.io.*;
import java.util.Scanner;
class Divide1{
	public static void main(String args[]) throws IOException{
		int a,b,res;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter two numbers");
		a=sc.nextInt();
		b=sc.nextInt();
	try{
		res=a/b;
		System.out.println("Quotient"+res);
	}
	catch(ArithmeticException ae)
		{
		System.out.println("Exception Occured - Arithmetic Exception i.e don't enter zero   "+ae);
		}
	}		
	
}
	
	
		
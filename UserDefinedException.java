
<Katbin/>

    Register
    Log in

import java.util.Scanner;
class LessBalanceException extends Exception{
	String message;
	public LessBalanceException(String message){
		this.message = message;
		}
	}
public class UserDefinedException{
	static double currentbalance= 1000;
	public static void main(String[] args) throws LessBalanceException{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter amount for withdrawal");
		int n = sc.nextInt();
		try{
			if(currentbalance < n){
				throw new LessBalanceException("Withdraw amount is not valid. Balance is "+currentbalance);
				}
			else{
				System.out.println("Please take the Money"+n);
			}
		}
		catch(LessBalanceException mab){
			mab.printStackTrace();
		}
	}
}
© 2023 SphericalKat
Fork me!

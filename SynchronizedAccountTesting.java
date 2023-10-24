public class SynchronizedAccountTesting implements Runnable 
{
	private Account acct = new Account();
	public static void main(String[] args) 
	{
		SynchronizedAccountTesting r = new SynchronizedAccountTesting();
		Thread one = new Thread(r);
		Thread two = new Thread(r);
		one.setName("JOE");
		two.setName("JOHN");
		one.start();
		two.start();
	}

	public void run()
	{
		for(int x=0;x<5;x++)
		{
			makeWithdrawl(10);
			if (acct.getBalance() < 0)
			{
				System.out.println("Account is overdrawn ");
			}
		}
	}

	private synchronized void makeWithdrawl(int amt)
	{
		if (acct.getBalance() >= amt)
		{
			System.out.println(Thread.currentThread().getName()+" is going to withdrawn");
			try
			{
				Thread.sleep(100);
			}
			catch (InterruptedException ex)
			{}
			acct.withdraw(amt);
			System.out.println(Thread.currentThread().getName()+" completes the withdrawl");
		}
		else
		{
			System.out.println("Not enough in account for "+Thread.currentThread().getName()+" to withdraw " + acct.getBalance());
		}
	}
}

class Account
{
	private int balance = 50;
	public int getBalance()
	{
		return balance;
	}
	public void withdraw(int amount)
	{
		balance = balance - amount;
	}
}

			


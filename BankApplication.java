import java.util.Scanner;
  class employee{
     float amount;
     float balance=0;
     Scanner in = new Scanner(System.in);
     public void createaccount(){
    System.out.println("Enter a customer name");
    String name=in.next();
    System.out.println("Enter a account no");
    int acco = in.nextInt();
    System.out.println("Enter a mobile no");
    int mobno = in.nextInt();
    System.out.println("Enter the address"); 
    String addr=in.nextLine();
    System.out.println("Account Details");
    System.out.print("Name\t"+"Account No.\t"+"Mobile No\t"+"Address\t");
    System.out.print("name\t"+"acco\t"+"mobno\t"+"addr\t"+"\n");
    System.out.println("Account created successfully");
   }

  public void deposit(){
       System.out.println("Amount=");
       amount=in.nextFloat();
       if(amount<=0){
          System.out.println("Can't deposit nonpositve account");
          }
        else{
          balance+=amount;
          System.out.println("$"+amount+"has been deposit");
          }
        }

public void withdraw(){
       System.out.print("Amount to withraw");
       amount=in.nextFloat();
       if(amount<=0||amount<balance)
        System.out.println("Withdraw cant be completed");
       else{
       balance-=amount;
       System.out.print("$"+amount+"has benn withdrawed");
       }
 }

public void displayBalance(){
       System.out.println("Your balance:$"+balance);
}
 
public class BankApplication{
    public static void main(String[] args){
     Scanner in1= new Scanner(System.in);
     int choice;
     employee b= new employee();
     do{
        System.out.println("1.Create an account");
        System.out.println("2.Deposit Money");
        System.out.println("3.Withdraw");
        System.out.println("4.Display Balance");
        System.out.println("5.Exit");
        System.out.println("Enter your choice");
        choice=in1.nextInt();
        switch (choice){
              case 1:b.createaccount();
                break;

              case 2:b.deposit();
                break;

              case 3:b.withdraw();
                break;

              case 4:b.displayBalance();
                break;

              case 5:
                break;
              
          default:
               System.out.println("Wrong Choice uhoh");
                 break;
             }
          }while(choice!=5);
   }
}

}
 
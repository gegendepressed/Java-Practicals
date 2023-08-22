class Teacher{
	int num1;
	String sub="C++";
	Teacher(){
	          num1=100;
		}
void display(){
	System.out.println("\n");
	System.out.println("Subject handled by teacher="+sub);
	}
}

class Professor extends Teacher{
	int num2;
	String sub1="JAVA";
	Professor(){
		num2=200;
}
void display(){
	System.out.println("Details are");
	System.out.println("Professor ID="+num2);
	System.out.println("Teacher ID="+num1);
	System.out.println("Subject handled by Professor="+sub1);
	super.display();
	}
}

public class Inheritance{
	public static void main(String[] args){
		Professor obj= new Professor();
		obj.display();
		}
}

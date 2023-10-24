class Bank {
	int interest() {
		return 0;
	}
}

class Sbi extends Bank {
	int interest() {
		return 7;
	}
}

class Icici extends Bank {
	int interest() {
		return 8;
	}
}

class Axis extends Bank {
	int interest() {
		return 9;
	}
}

class BankInterest {
	public static void main(String[] args) {
		Sbi s = new Sbi();
		Icici i = new Icici();
		Axis a = new Axis();
		System.out.println("SBI Interest: "+s.interest());
		System.out.println("Icici Interest: "+i.interest());
		System.out.println("Axis Interest: "+a.interest());
	}
}
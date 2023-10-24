class Books {
	public int display() {
		return 5;
	}
}

class ReferenceBooks extends Books {
	public int display() {
		return 8;
	}
}

class Magzine extends Books {
	public int display() {
		return 7;
	}
}

public class MethodOverriding {
	public static void main(String[] args) {
		Books b = new Books();
		ReferenceBooks r = new ReferenceBooks();
		Magzine m = new Magzine();
		System.out.println("No. of Books: "+b.display());
		System.out.println("No. of Reference Books: "+r.display());
		System.out.println("No. of Magzines: "+m.display());
	}
}
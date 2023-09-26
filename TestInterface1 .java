interface Vehicle
{
void ride();
}
class Bicycle implements Vehicle
{
public void ride()
{
System.out.println("Riding Bicycle");
}
}
class Car implements Vehicle
{
public void ride()
{
System.out.println("Riding Car");
}
}
class Bike implements Vehicle
{
public void ride()
{
System.out.println("Riding Bike");
}
}
class TestInterface1
{
public static void main(String[] args)
{
Vehicle b=new Bicycle();
Vehicle c=new Car();
Vehicle bi=new Bike();
b.ride();
c.ride();
bi.ride();
}
}
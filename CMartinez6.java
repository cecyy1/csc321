//Cecilia Martinez
//CSC 321


public class CMartinez6{
	public static void main(String[] args){
		int a=9;
		int b=25;

		double c=9.0;
		double d=25.0;

		int divisor=4;

		System.out.println("for intergers:");
		System.out.println("first result: "+(a+b*a/b-a));
		System.out.println("Second result: "+ (-a-b/a*b+a));
		System.out.println("third result: "+ (a+b-a/b));

		//double
		System.out.println("for doubles:");
                System.out.println("first result: "+ (c+d*c/d-c));
                System.out.println("Second result: "+ (-c-d/c*d+c));
                System.out.println("third result: "+ (c+d-c/d));

	 

	}

}
//Do the programs evaluate the same in both programming languages?Why or why not
//Overall yes the programs do evalute the same expression in both java and C because they follow the rules of arithmetic operation and operator precedence 

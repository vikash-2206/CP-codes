import java.util.*;
public class ArmstrongNo{
	public static void main(String[] args) {
		System.out.println("Enter a number");
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int a =  num;
		int cube=0;

		while(a!=0)
		{
			int x = a%10;
			cube = cube + (x*x*x);
			a=a/10;

		}

		if (num == cube)
			System.out.println("Armstrong Number");
		else System.out.println("Armstrong Number");

	}
}
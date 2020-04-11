import java.util.*;
public class LargestNo{
	public static  void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();

		if(a>b)
		{
			if (b>c)
			{
				System.out.println(a);

			}
			if (c>a)
				System.out.println(c);
		}
		else if (b>a)
		{
			if(b>c)
				System.out.println(b);
			if (c>b)
				System.out.println(c);
		}
	}
}
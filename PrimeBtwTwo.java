import java.util.*;
public class PrimeBtwTwo{
	public static void main(String[] args) {
		
		System.out.println("Enter two Numbers");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		for (int i=a;i<=b;i++)
		{
			int count=0;
			for (int k=2;k<=i/2;k++)
			{
				if(i%k==0)
				{	count++;
				break;
			    }
		    }
		    if (count==0)
		    	System.out.println(i);
		}
	}
}
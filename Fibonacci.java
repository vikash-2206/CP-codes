import java.util.*;
public class Fibonacci{
	public static void main(String[] args) {
		
		System.out.println("Enter the number of terms you want to print");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int []array= new int[n+2];
		array[0]=0;
		array[1]=1; 
		 for (int i=2;i<=n;i++)
		 {
		 	array[i]=array[i-1]+array[i-2];
		 	
		 }
		  for (int i=0;i<=n;i++)
		 {
		 	
		 	System.out.println(array[i]);
		 }


	}
}
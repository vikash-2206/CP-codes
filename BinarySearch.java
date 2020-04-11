import java.util.*;
public class BinarySearch{

	public static void main(String[] args) {
		
		int [] array = {1,2,3,4,5,6,7,8,9,10 };
		System.out.println("Enter a number you want to find");
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int ans = search(array,x);
		if (ans == -1) 
            System.out.println("Element not present"); 
        else
            System.out.println("Element found at index "+ ans); 

	}

	static int search(int [] array,int x)
	{
		int l=0,n=array.length-1;
		while(l<=n){
			int m = l+ (n-1)/2;
			if (array[m]==x)
				return m;

			if (array[m]<x)
				l =m+1;

			else n = m-1;

		}

		return -1;
	} 
}
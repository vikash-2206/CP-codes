import java.util.*;
public class QuickSort{
	public static void main(String[] args) {
		System.out.println("How many numbers do you want to sort?");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int [] array = new int[n];
		System.out.println("Enter the number you want to sort?");
		for (int i=0;i<n;i++)
		{
			array[i]=sc.nextInt();

		}

		sort(array,0,n-1);
		System.out.println("SORTED ARRAY IS:");
		print(array);

	}

	static void sort(int [] array, int start,int end){

		if (start<end)
		{
			int pi = partition(array,start,end);

			sort (array,start,pi-1);
			sort(array,pi+1,end);
		}

	}

	static int partition(int [] array,int start,int end)
	{
		int pivot = array[end];
		int i = start-1;
		for (int j=start;j<end;j++)
		{
			if (array[j]<= pivot)
			{
				i++;
				int temp = array[i];
				array[i]=array[j];
				array[j]= temp;
			}
		}

		int temp = array[i+1];
		array[i+1]= array[end];
		array[end]=temp;
		return i+1;
	}
	static void print(int [] array)
	{
		int n= array.length;

		for (int i=0;i<n;i++)
		{
			System.out.println(array[i]);
		}
	}
}
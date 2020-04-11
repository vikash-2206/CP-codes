import java.util.*;
public class InsertionSort{

	public static void main(String[] args) {
		
		System.out.println("How many numbers do you want to sort?");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int [] array = new int[n];
		for (int i=0;i<n;i++)
		{
			array[i]=sc.nextInt();

		}
				
		sort(array);

		for (int i=0;i<n;i++)
		{
			System.out.println(array[i]);

		}
	}

	static void sort(int[] array)
	{	int temp,j=0,i;
		int n =array.length;
		for ( i=1;i<n;i++)
		{   j=i-1;
			temp = array[i];
			while (j>=0 && array[j]>temp)
				{
					array[j+1]=array[j];

					j--;
				}

			array[j+1]=temp;
		}
	}



} 
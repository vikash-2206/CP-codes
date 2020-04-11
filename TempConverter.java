import java.util.*;
public class TempConverter{
	public static void main(String[] args) {
		System.out.println("Enter the temp to be converted");
		Scanner sc =new Scanner(System.in);
		int temp = sc.nextInt();
		System.out.println( temp + " Fahrenheit = " + (temp-32)*(5/9) + " Celsius");
	}
}
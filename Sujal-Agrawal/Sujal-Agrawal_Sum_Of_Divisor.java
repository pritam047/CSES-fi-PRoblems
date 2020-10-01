package xyz;

import java.util.Scanner; 

public class Sum_Of_Divisor { 
	
	static int divisorSum(int n) 
	{ 
		int sum = 0; 

		for (int i = 1; i <= n; ++i) { 
 
			for (int j = 1; j * j <= i; ++j) { 
				if (i % j == 0) { 
					if (i / j == j) 
						sum += j; 
					else
						sum += j + i / j; 
				} 
			} 
		} 
		return sum; 
	} 

	public static void main(String args[]) 
	{ 
		
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();  // no of test cases
		while(T-->0)
		{
			int n = sc.nextInt(); 
			System.out.println(divisorSum(n));
		}
	} 
} 



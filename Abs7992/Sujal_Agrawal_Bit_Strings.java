package xyz;
import java.util.Scanner; 

public class Bit_Strings 
{ 

static int mod = (int) (1e9 + 7); 


static int power(int x, int y, int p) 
{ 
	int res = 1;

	x = x % p;  

	while (y > 0) 
	{ 
 
		if ((y & 1)==1) 
			res = (res * x) % p; 

		y = y >> 1; 
		x = (x * x) % p; 
	} 
	return res; 
} 
 
static int findCount(int N) 
{ 
	int count = power(2, N, mod); 
	return count; 
} 
 
public static void main(String[] args) 
{ 
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt(); 
		System.out.println(findCount(N)); 
} 
} 



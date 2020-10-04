import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc= new Scanner(System.in);
	    long n = sc.nextLong();
	    long sum = n*(n+1)/2;
            long a[]=new long [n];
	    long sumn = 0L;
	    for(long i=0 ;i<n-1;i++){
	        a[i]=sc.nextLong();
	        sumn=sumn+a[i];
	    }
	    
		System.out.print(sum-sumn);
	    
	}
}

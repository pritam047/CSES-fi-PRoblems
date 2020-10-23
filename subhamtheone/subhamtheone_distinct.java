package java_prog;
import java.util.scanner;
public class distinct {

	public static void main(String[] args) 

{
              Scanner sc=new Scanner(System.in);
                int n= sc.nectInt();  
		int a[]=new int [n];
                for(int i=0;i<a.length;i++)
                 { 
                   a[i]=sc.nextInt();
                  }
             for ( int i=0;i<a.length-1;i++)
              { 
                 if (a[i]==a[i+1])
                   { distinctele=a.length--;
                    }
               }
        System.out.print (" total no.of distinct elements in array" + distinctele);
              



	}

}

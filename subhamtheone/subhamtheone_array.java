package java_prog;

public class array {
	static int minRemove(int arr[], int n) 
    { 
        int LIS[] = new int[n]; 
        int len = 0; 
  
        // Mark all elements of LIS as 1 
        for (int i = 0; i < n; i++) 
            LIS[i] = 1; 
  
        // Find LIS of array 
        for (int i = 1; i < n; i++) { 
            for (int j = 0; j < i; j++) { 
                if (arr[i] > arr[j] && (i-j)<=(arr[i]-arr[j])) 
                    LIS[i] = Math.max(LIS[i],  
                                 LIS[j] + 1); 
            } 
            len = Math.max(len, LIS[i]); 
        } 
  
        // Return min changes for array 
        // to strictly increasing 
        return n - len; 
    } 
  

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = { 1, 2, 6, 5, 4 }; 
        int n = arr.length; 
  
        System.out.println(minRemove(arr, n));

	}

}

import java.util.*;

public class Q2 {
	
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of array: ");
		int n= sc.nextInt();
		
		int []arr=new int[n];
		
              System.out.println("Enter the elements in the array: ");
	

			for (int i = 0; i<n; i++)
				arr[i] = sc.nextInt();
			
			try{
			System.out.println("Enter the index of the array element: ");
			
			int ind = sc.nextInt();
			
			System.out.println("The array element at index "+ ind + " is: "+ arr[ind]);
            }

            catch(ArrayIndexOutOfBoundsException e){
                  
                System.out.println(e.getClass().getCanonicalName());

            }
		

	}

}

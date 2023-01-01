public class prac_prob{

   public static void main(String args[])
{

int []arr1={1,2,3,4,5};
int []arr2={6,7,8,9,10};

int arr[]= new int[5];

for(int i=0;i<5;i++){

    if(i%2==0){
arr[i]=arr2[i];
    }
    else{
        arr[i]=arr1[i];
    }

}
for(int i=0;i<5;i++){
    System.out.println(arr[i]);
}

   }

}

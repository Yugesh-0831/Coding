import java.util.*;

public class java{

    static int add(int a,int b){
        return a+b;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("enter 1st no");
        int a= sc.nextInt();  
        System.out.println("enter 2nd no");
        int b= sc.nextInt();  

        java j = new java();
        int sum = j.add(a,b);
        System.out.println("sum = "+ sum);

    }
}
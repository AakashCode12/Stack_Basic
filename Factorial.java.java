import java.util.*;
class Factorial{

    public static void main(String args[]){

        Scanner sc=new Scanner (System.in);

        System.out.println("Enter the number whose factorial is to be calculated ");
        int n=sc.nextInt();
        int fact=1;
        int n1=n;
        for(int i=1;i<n;i++){
          fact=fact*n1;
          n1=n1-1;
        }

        System.out.println("Factorial of the given number is "+fact);
    }
}

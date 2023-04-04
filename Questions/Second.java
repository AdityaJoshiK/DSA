import java.util.Scanner;

public class Second {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter n:");
        int n=sc.nextInt();

        int digit=0,num=n,sum=0;

        while (n!=0) {
            digit=n%10;
            sum=(sum*10)+digit;
            n=n/10;
        }


        System.out.println(sum);
        if (sum==num) {
            System.out.println("Pailndrome");
        }

        else{
            System.out.println("Not");
        }
    }
}

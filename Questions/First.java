import java.util.Scanner;

public class First
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter n:");
        int n=sc.nextInt();

        int flag=0;

        if (n<=1) {
            flag=1;
        }

        for (int i = 2; i <=n/2; i++) {
            if (n%i==0) {
                flag=1;
                break;
            }
        }

        if (flag==0) {
            System.out.println("Number is Prime");
        }
        else{
            System.out.println("Number is not Prime");
        }

        sc.close();
    }
}
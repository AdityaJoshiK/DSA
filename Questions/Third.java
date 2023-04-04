import java.util.Scanner;

public class Third {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter n:");
        int n=sc.nextInt();
        int digit=0;
        int a[]=new int[100];
        int temp=0;
        while (n!=0) {
            digit=n%2;
            a[temp]=digit;
            temp++;
            n=n/2;
        }

        for (int i = temp; i >=0; i--) {
            System.out.print(a[i]);
        }

        sc.close();
    }
}

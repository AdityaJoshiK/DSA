import java.util.Scanner;

public class nine {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        for (int i = 1; i < n; i=i+5) {
            if (i%2!=0) {
                for (int j = i; j <i+5; j++) {
                    System.out.print(j+" ");
                }
            }
            else{
                for (int j = i+4; j!=i-1; j--) {
                    System.out.print(j+" ");
                }
            }
            System.out.println();
        }
    }
}

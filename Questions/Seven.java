import java.util.Scanner;

public class Seven {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter Hour:");
        int h=sc.nextInt();

        System.out.println("Enter Minute:");
        int m=sc.nextInt();

        double hangle=((h*60)+m)*0.5;
        double mangle=m*6;

        double diff=Math.abs(hangle-mangle);

        if (diff<180) {
            System.out.println(diff);
        }
        else{
            System.out.println(360-diff);
        }
        sc.close();
    }
}

package Codegenie;
import java.util.Scanner;

/**
 * CalculatePercentileScore
 */
public class CalculatePercentileScore {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter Total Students:");
        float n=sc.nextInt();

        float a[]=new float[(int) n];
        // int a[]={800, 300, 950, 760, 680, 490, 640};
        System.out.println("Enter Marks Of "+n+" Students:");
        for (int i = 0; i < a.length; i++) {
            System.out.print("Enter Marks Of Student "+(i+1)+":");
            a[i]=sc.nextInt();
        }

        System.out.print("Enter Your Marks:");
        int s=sc.nextInt();
        // float s=760;

        float x=0;

        for (int i = 0; i < a.length; i++) {
            if (a[i]<s) {
                x++;
            }
        }
        System.out.println("Your percentile score - "+(x/n)*100);

        sc.close();
    }
    
}
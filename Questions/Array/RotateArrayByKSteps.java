package Array;

import java.util.Arrays;

public class RotateArrayByKSteps {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5, 6, 7};

        int k=3,c=0;

        int temp;

        while (c!=k) {
            temp=a[a.length-1];
            for (int i = a.length-1; i >=1; i--) {
                
                a[i]=a[i-1];
            }
            a[0]=temp;
            c++;
        }

        System.out.println(Arrays.toString(a));
       
    }
}

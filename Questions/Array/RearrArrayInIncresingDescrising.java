package Array;

import java.util.Arrays;

// Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

public class RearrArrayInIncresingDescrising {
    public static void main(String[] args) {
        int a[]={4 ,2 ,8 ,6 ,15, 5 ,9, 20};

        Arrays.sort(a);

        for (int i = 0; i < a.length/2; i++) {
            System.out.print(a[i]+" ");
        }

        for (int i = a.length-1; i >=a.length/2; i--) {
            System.out.print(a[i]+" ");
        }
    }
}

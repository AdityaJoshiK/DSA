package Array;

//We can find second min max after sort array but it takes nlogn time so it is efficient aproach in n time

public class SecondMinMaxWithoutSortArray {

    public static void main(String[] args) {
        
        int[] arr = {1, 2, 4, 6, 7, 5};
        int n = arr.length;

        if (n==0 || n==1) {
            System.out.print("-1 ");
            System.out.println("-1"); 
        }

        int small=Integer.MAX_VALUE;
        int secondsmall=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        int secondmax=Integer.MIN_VALUE;

        //first we find min,max
        for (int i = 0; i < arr.length; i++) {
            small=Math.min(small, arr[i]);
            max=Math.max(max, arr[i]);
        }

        //now we would find the largest element which is just smaller than the largest element we just found
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]<secondsmall && arr[i]!=small) {
                secondsmall=arr[i];
            }
            if (arr[i]>secondmax && arr[i]!=max) {
                secondmax=arr[i];
            }
        }

        System.out.println("Second smallest is "+secondsmall);
	    System.out.println("Second largest is "+secondmax);
    }
}

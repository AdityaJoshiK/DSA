import java.util.Arrays;

public class eightnew {
    public static void main(String[] args) {
        int a[]={8,2,4,15,9,1,10};

        int b[]=new int[a.length];

        Arrays.sort(a);

        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }

        int ind=(a.length/2),s=0,lindex=0,rindex=0;

        for (int i = 0; i < a.length; i++) {
            if (s==0) {
                b[ind]=a[i];
                lindex=ind-1;
                rindex=ind+1;
                s++;
            }
            else if (i%2!=0) {
                b[lindex]=a[i];
                lindex=lindex-1;
            }
            else{
                b[rindex]=a[i];
                rindex=rindex+1;
            }
        }

        System.out.println();
        for (int i = 0; i < b.length; i++) {
            System.out.print(b[i]+" ");
        }

    }
}

public class Six {
    public static void main(String[] args) {
        // int a[]={1,2,3,4,5};
        // int b[]={2,3,1,0,5};
        int a[]={2,8,7,5,9};
        int b[]={9,5,2,1,0};

        int n,p=0;

        for (int i = 0; i < 5; i++) {
            n=a[i];

            for (int j = 0; j < 5; j++) {
                if (n==b[j]) {
                    p++;
                }
            }

            if (p==0) {
                System.out.print(n+" ");
            }
            p=0;
        }
    }
}

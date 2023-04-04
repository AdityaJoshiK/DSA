public class four {
    
    public static void main(String[] args) {
        int a[]={1,2,3,4,5,7,9,5,6};

        int temp=0;

        for (int i = 0; i < a.length; i++) {
            if(i+1<(a.length-1)){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;}
            i++;
        }

        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}

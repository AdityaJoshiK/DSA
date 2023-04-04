

public class eight {
    public static void main(String[] args) {

        int a[]={1,2,3,4,5};

        int b[]=new int[5];

        int min=a[0],mc=0,tempmin=a[1],c=0,clen=0;

        for (int J = 0; J < 5; J++) {

        for (int i = 0; i < 5; i++) {
            if (a[i]<min ) {
                min=a[i];
                mc++;
            }

            else if (mc>0 && a[i]<tempmin && a[i]!=min) {
                tempmin=a[i];
            }
        }
        System.out.println(tempmin);
        if(c==0){
        clen=a.length/2;
        b[clen]=min;
        tempmin=min;
        c++;}
        else{
            if(c%2!=0)
            b[c-1]=tempmin;

            else
            b[c+1]=tempmin;
            // break;
        }
 

    }

        for (int i = 0; i < b.length; i++) {
            System.out.println(b[i]);
        }
    }
}

import java.util.Scanner;

public class ten {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String a="a2b3cd";
        char arr[]=a.toCharArray();
        char n[]=new char[50];

        int d=0,le=0;

        for (int i = 0; i < arr.length; i++) {
            if (Character.isDigit(arr[i])) {
                for (int j = 0; j < Character.getNumericValue(arr[i])-1; j++) {
                    // System.out.println(j);
                    n[le]=arr[i+1];
                    d=j;
                    le++;
                }
            }
            else{
            n[le]=arr[i];
            d++;
            le++;}
        }

        for (int i = 0; i < le; i++) {
            System.out.print(n[i]);
        }
    }
}

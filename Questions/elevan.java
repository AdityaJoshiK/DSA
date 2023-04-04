import java.util.Scanner;

public class elevan {

    // public static String func(int n)
    // {
    //     if (n==1) {
    //         return "one";
    //     }
    //     if (n==2) {
    //         return "two";
    //     }
    //     if (n==3) {
    //         return "three";
    //     }
    //     if (n==4) {
    //         return "four";
    //     }
    //     if (n==5) {
    //         return "five";
    //     }
    //     if (n==6) {
    //         return "six";
    //     }
    //     if (n==7) {
    //         return "seven";
    //     }
    //     if (n==8) {
    //         return "eight";
    //     }
    //     if (n==9) {
    //         return "nine";
    //     }
    //     else{}
    // }
    public static void main(String[] args) {
        int n,digit=0;

        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();

        String s[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        String s1[]={"Elevan","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eightteen","Nineteen"};

        System.out.println("Enter Number:");

        if (n<=99) {
            
            if (n==0) {
                System.out.println(s[0]);
            }
            if (n==1) {
                System.out.println(s[n]);
            }
            if (n==2) {
                System.out.println(s[1]);
            }
            if (n==3) {
                System.out.println(s[n]);
            }
            if (n==4) {
                System.out.println(s[n]);
            }
            if (n==5) {
                System.out.println(s[n]);
            }
            if (n==6) {
                System.out.println(s[n]);
            }
            if (n==7) {
                System.out.println(s[n]);
            }
            if (n==8) {
                System.out.println(s[n]);
            }
            if (n==9) {
                System.out.println(s[n]);
            }

            if (n>=11 && n<=19) {
                digit=n%10;
                System.out.println(s1[digit-1]);
            }
            if (n>=20 && n<=29) {
                digit=n%10;
                System.out.println("twenty"+" "+s[digit]);
            }
            if (n>=30 && n<=39) {
                digit=n%10;
                System.out.println("thirty"+" "+s[digit]);
            }
            if (n>=40 && n<=49) {
                digit=n%10;
                System.out.println("fourty"+" "+s[digit]);
            }
            if (n>=50 && n<=59) {
                digit=n%10;
                System.out.println("fifty"+" "+s[digit]);
            }
            if (n>=60 && n<=69) {
                digit=n%10;
                System.out.println("sixty"+" "+s[digit]);
            }
            if (n>=70 && n<=79) {
                digit=n%10;
                System.out.println("seventy"+" "+s[digit]);
            }
            if (n>=80 && n<=89) {
                digit=n%10;
                System.out.println("eighty"+" "+s[digit]);
            }
            if (n>=90 && n<=99) {
                digit=n%10;
                System.out.println("ninety"+" "+s[digit]);
            }
        }
    }
}

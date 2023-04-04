import java.util.Scanner;

public class QuotientAndRemainder
{
    public static void main(String[] args) {
        
        int num1,num2,q=0,temp=0;

        Scanner sc= new Scanner(System.in);
		
		System.out.println("Enter Number 1:");
		num1=sc.nextInt();
		
		System.out.println("Enter Number 2:");
		num2=sc.nextInt();
		
		if (num1<num2) {
			temp=num2;
			num2=num1;
			num1=temp;
		}

        while(num1>=num2)
        {
            num1=num1-num2;
            q++;
        }

        System.out.println("Quotient:"+q);
        System.out.println("Remainder:"+num1);
    }
}
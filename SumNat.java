import java.io.*;
import java.util.Scanner;
public class Sum{
public static void main(String args[])
{
int n,i;
Scanner sc=new Scanner(System.in);
System.out.println("enter the value of N:");
n=sc.nextInt();
for(i=1;i<=n;i++)
{
sum=sum+i;
}
System.out.println(sum);
}
}

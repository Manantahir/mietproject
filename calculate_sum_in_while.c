/*
Author Manan Tahir
Program to Calculate the sum of numbers using while loop
*/
#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter the number");
    scanf("%d",&n);
    int g=n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("sum of digits of %d is %d",g,sum);
    return 0;
}
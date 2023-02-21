/*
Author Manan Tahir
Program to find odd and even number.
*/ 
#include<stdio.h>
void main()
{
    int  a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("this is even=%d",a);
    }
    else
    {
        printf("this is odd=%d",a);
    }
}
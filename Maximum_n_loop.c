/*
Author Manan Tahir
Program to find n numbers in loop.
*/ 
#include<stdio.h>
int main()
{
    int n,a=0;
    for(int i =0;i<5;i++)
    {
        printf("Enter the no %d",i+1);
        scanf("%d",&n);
        if(a<n)
        {
            a=n;
        }
    }
    printf("largest no is%d",a);
    return 0;
}
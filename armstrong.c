#include<stdio.h>
void main()
{
    int n,sum=0,rem,temp=0;
    printf( " enter the integer:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("it is a armstrong number:");
    }
    else
    {
        printf("it is  not a armstrong number:");
    }
}
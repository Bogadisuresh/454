#include <stdio.h>
void main() {
    int n,rem ,sum=0;
    printf("enter the n value: ");
    scanf(" %d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
}
    printf("%d",sum);
}

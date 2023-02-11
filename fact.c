#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("\nEnter the value of n");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;

}

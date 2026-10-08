#include<stdio.h>

int main()
{
    int a,i;
    printf("enter the number:");
    scanf("%d",&a);

    for ( i = 1; i<100; i++)

    {
     if ( a % i == 0)
     printf("\n%d",i);   
    }
    
}

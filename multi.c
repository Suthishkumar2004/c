#include <stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum+i;
        
        i++;
    }  
     printf("\nsum of %d numbers : %d",n,sum);  
    return 0;
}
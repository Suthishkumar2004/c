#include<stdio.h>
int main ()
 {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    return 1;
    if(num%3 == 0 && num%5 == 0){
        printf("%d div by both 3 and 5.\n",num);
    }
    else if(num%3==0){
        printf("%d div by 3.\n",num);
    }
    else if(num%5==0){
        printf("%d div by 5.\n",num);

    }else{
        printf("%d is not div by 3 or 5.\n",num);
    }
    return 0;
}
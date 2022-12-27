#include<stdio.h>
void main(){
    int a;
     printf("enter the element :");
    scanf("%d",&a);
    switch (a%2)
    {
    case 0:
    printf("Even");
        break;
    case 1:
    printf("odd");
    default:
        break;
    }
}
#include<stdio.h>
void main()
{

    int num,num1,rev=0,r;
    printf("Enter the Number :");
    scanf("%d",&num);
    num1=num;
while(num>0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;

    }
    if(num1==rev){
        printf("The number is palindrom");
    }
    else{
        printf("The number is not palindrom");
    }
}
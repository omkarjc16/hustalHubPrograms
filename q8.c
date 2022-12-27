#include <stdio.h>
void main(){
int num1,num2,temp;

printf("Enter the two numbers");
scanf("%d  %d",&num1,&num2); 
temp= num1;
num1 = num1 | num2; 
num2= num2 & temp;
printf("The Swapping number is %d %d", num1, num2);
}
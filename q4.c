#include<stdio.h>
void main() { 
int num;
scanf ("%d",&num);
int array [10];
for (int i=0; i<=10; i++) {
printf("Enter the array element"); 
scanf("%d",&array[i]);
}
for (int i=0;i<=10; i++){ 
if( array [i] == num) {
printf("%d is index of Number \n and  %d is this number", i, num);
}}}
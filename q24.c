#include<Math.h> 
#include <stdio.h> 
void main() {
int n;
printf("Enter the n value");
scanf("%d",&n);
for (int i=0;i<=n; i++) {
for (int j=0; j<= n; j++) {
for (int k=0; k<=10;k++) {

if (pow(i, k) + pow (j,k+1) == i *10+j*1){
printf ("%d ", i*10+j*1);
}}}}}
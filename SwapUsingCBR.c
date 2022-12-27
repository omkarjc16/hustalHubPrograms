#include<stdio.h>
int swapNumber(int *a,int *b);
void main(){
    int a,b;
    printf("Enter the Values Of a And b :");
    scanf("%d %d",&a,&b);
    swapNumber(&a,&b);
    printf("The after Swapping in main a =%d and b=%d",a,b);

}
int swapNumber(int *a,int *b){
    *a=*a+(*b);
    *b=*a-(*b);
    *a=*a-(*b);
    printf("The after Swapping a =%d and b=%d",*a,*b);
}
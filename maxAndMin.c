#include<stdio.h>
void main(){
    int s,max,min;
    printf("Enter the size of 1st Array :");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
    printf("Enter the %dth element :",i);
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<s;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The Max =%d And Min=%d",max,min);
    
}
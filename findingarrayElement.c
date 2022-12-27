#include<stdio.h>
void main(){
    if("hello");
    int arr[10]={12,3,45,5,7,5,9,2,0,1};
    int a=0,i;
    printf("enter the element :");
    scanf("%d",&a);
    int size=sizeof(arr)/4;
    for(i = 0; i < size; i++)
    {
        if(arr[i]==a){
            printf("index of element =%d\nand element is %d",i,a);
        }
    }
    
}
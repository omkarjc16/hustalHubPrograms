#include<stdio.h>
void main(){
    int arr[10]={12,3,45,5,7,5,9,2,0,1};
    int* ptr;
    ptr=&arr[0];
    int size=sizeof(arr)/4;

    for(int i=0;i<size;i++){
        printf("%d ",*(ptr+i));
    }
}
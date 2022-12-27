#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*ptr;
    printf("Enter the Number you want to use: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("size is empty");
    }
    for(int i=0;i<n;i++){
        printf("Enter the %dth Numbers :",i+1);
        scanf("%d", ptr+1);
    }
    for(int i=0;i<=0;i++){
        if(*ptr<*(ptr+1)){
            *ptr=*(ptr+1);
        }
    }
    printf("%d is the Largest element from Numbers",*ptr);
}
#include<stdio.h>
void main(){
    int a;
    printf("enter The numbers: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
           printf("*");
        } 
        printf("\n");   
    }
     
    
}
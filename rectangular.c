#include<stdio.h>
void main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=6;j++){
            if(i==1 ||i==3||j==1||j==6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
   
}
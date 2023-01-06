#include<stdio.h>
#include<stdlib.h>
int main(){
int num;
    printf("Enter the size :");
    scanf("%d",&num);
for(int i=0;i<num;i++){
    for(int j=num-1;j>i;j--){
        printf(" ");
    }
    for(int k=0;k<i;k++){
        printf("* ");
    }
    printf("\n");
}
for(int i=num;i>0;i--){
    for(int j=0;j<num-i;j++){
        printf(" ");
    }
    printf(" ");
    for(int k=1;k<i-1;k++){
        printf("* ");
    }
    printf("\n");
}
}
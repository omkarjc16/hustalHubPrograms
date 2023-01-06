#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter the size :");
    scanf("%d",&num);
for(int i=0;i<=num;i++){
    for(int j=0;j<i;j++){
        printf("*");
    }
    printf("\n");
}
for(int i=1;i<num;i++){
    for(int j=num;j>i;j--){
        printf("*");
    }
    printf("\n");
}
    return 0;
}
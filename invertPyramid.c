#include<stdio.h>
void halfPyramid(int a){
    for(int i=0;i<a;i++){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
    void main(){
        int num;
        scanf("%d",&num);
        halfPyramid(num);
    }
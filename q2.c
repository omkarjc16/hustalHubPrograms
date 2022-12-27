#include<stdio.h>
int temp (int temptature){
    if(temptature<22){
        printf("cold");
    }
    else if(temptature>30){
        printf("Hot");
    }
    else if(temptature>22 && temptature<=30){
        printf("Normal");
    }

}
void main(){
    int temprature;
    scanf("%d",&temprature);
    temp(temprature);
}
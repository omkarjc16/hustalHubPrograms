#include<stdio.h>
void main(){
    char c;
    printf("enter the characters :");
    scanf("%c",&c);
    if(c>='0' && c<='9'){ 
        printf("The given Character is Digit");
    }
    else{
                printf("The given Character is not Digit");

    }
    
}
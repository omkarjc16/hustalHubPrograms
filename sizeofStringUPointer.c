#include<stdio.h>
void main(){
    int c=0;
    char s[]="Hello";
    while(*s !='\0'){
        c++;
        s++;
        
    }
    printf("%d",c-1);
}

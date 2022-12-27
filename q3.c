#include<stdio.h>
void main(){
    char s []="Hello Word";
    for(int i=0;i<=sizeof(s);i++){
        if(s[i]==' '){
            continue;
        }
        printf("%c",s[i]);
         
    }
}
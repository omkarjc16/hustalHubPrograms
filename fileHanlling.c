#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fptr;
    char file[200];
    fptr=fopen("text.txt","r");
    if(fptr!= NULL){
        printf("File open succesful \n");
        fgets(file,100,fptr);
        printf("%s",file);
    }
    //printf("The string in given file is %s",file);
   
	fclose(fptr);
}
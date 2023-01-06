#include<stdio.h>
#include<stdlib.h>
struct emp{
    int id;
    int salary;
    char name[20];
};
int main(){
struct emp *ptr;
struct emp e1={1121,6000,"ajay"};
ptr=&e1;

printf("%d is Salary %d is ID and %s is Name \n",ptr->salary,ptr->id,ptr->name);
printf("size of structure is %d",sizeof(e1.id)+sizeof(e1.salary)+sizeof(e1.name));
    return 0;
}
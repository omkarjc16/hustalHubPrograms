#include <stdio.h>
void main()
{
    int a, b, c = 0;
    float s = 12.6766;
    b = 121;
    FILE *fp;
    fp = fopen("C:/Users/Brigosha_Guest/Desktop/c programs/new.txt", "w");
    fprintf(fp, "new=%f", s);
    fprintf(fp, "\n a=%d", b);
    printf("\n number transferring succesfully");
}
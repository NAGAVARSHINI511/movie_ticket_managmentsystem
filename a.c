#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("Filedemo.txt","w");
    fprintf(fp, "%s" ,"likki");
    fclose(fp);
    return 0;
}
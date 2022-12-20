#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch[50];
    fp=fopen("Filedemo.txt","r+");
    printf("%s",fgets(ch,50,fp));
   
    fclose(fp);
    return 0;
}
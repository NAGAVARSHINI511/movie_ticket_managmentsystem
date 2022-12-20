#include<stdio.h>
#include<string.h>
int main()
{
    char username[10];
    FILE *fp;
    
    fp=fopen("Filedemo.txt","a+");
    printf("ENTET USER NAME");
    scanf("%s",username);
    fwrite(&username,10,1,fp);
fp=fopen("Filedemo.txt","r+");
    printf("%s",fgets(username,10,fp));
    fclose(fp);
    return 0;
}
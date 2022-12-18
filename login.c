#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  
   char username[10] , password[10] ;
   char un_default[]="abcd";
   char pass_default[]="12345";
   int x,y,n=1;
  do
  {
   printf("\nEnter the username: ");
   scanf("%s",&username);

   printf("\nEnter the password: ");
   scanf("%s",&password);
   x=strcmp(username, un_default);
   y=strcmp(password, pass_default);

   if(x == 0){
		if(y == 0){
			printf("\nUser successfully logged in...\n");
         break;
		}else{
			printf("\nPassword entered is invalid");
		}
	}else{
		printf("\nUsername entered is invalid");
	}
   n++;
   
   if(n>5){
      printf("\naccess denied\n");
      exit(0);
   }

  }while( n <= 5);

   return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void red () {
  printf("\033[1;31m");
}
void yellow(){
   printf("\033[0;33m");
}
void reset() {
  printf("\033[0m");
}
void blue(){
   printf("\033[0;34m");
}
void purple(){
   printf("\033[0;35m");
}
void green(){
   printf("\033[0;32m");
}



int main()
{
  
   char username[15] , password[10] ;
   char un_default[]="movie_maniac";
   char pass_default[]="@b123";
   int x,y,n=1;
   

  blue();
  printf("-------------------------------------------------------------------------------\n");
  printf("||###########################################################################||\n");
  printf("                                                                              \n");
  yellow();
  printf("                        WELCOME TO MOVIE MANIAC\n"); 
  blue();
  printf("                                                                              \n");
  printf("||###########################################################################||\n");
  printf("-------------------------------------------------------------------------------\n"); 
  reset();

  do
  {
   blue();
   printf("\nEnter the username: \n");
   scanf("%s",&username); 

   printf("\nEnter the password: \n");
   scanf("%s",&password);
   x=strcmp(username, un_default);
   y=strcmp(password, pass_default);

   if(x == 0){
		if(y == 0){
         green();
			printf("\nUser successfully logged in...\n");
         reset();
         break;
		}else{
         yellow();
			printf("\nPassword entered is invalid");
		}
	}else{
      yellow();
		printf("\nUsername entered is invalid");
	}
   n++;
   
   if(n>5){
      red();
      printf("\n***access denied***\n");
      reset();
      exit(0);
   }

  }while( n <= 5);

   return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 struct movie{
   char username[100];
   char password[100];
}movie;

void registera();
void login();
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
//
void green(){
   printf("\033[0;32m");
}

 char username[15] , password[10] ;
   char un_default[]="movie_maniac";
   char pass_default[]="@b123";
   int x,y,n=1,ch,i;
   
struct movie b;


int main()
{
 typedef struct movie s;
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
  printf("                          1.REGISTER\n");
  printf("                          2.LOGIN\n");
  printf("                          3.EXIT\n");
  printf("                          ENTER YOUR CHOICE: ");
  scanf("%d",&ch);
switch (ch)
{
   case 1:registera();
   break;
   case 2: login();
   break;
   case 3:return 0;
default :printf("invalid choice");
}
}
void login(){


  do

  {
   blue();
   printf("\nEnter the username: \n");
   scanf("%s",&username); 

   printf("\nEnter the password: \n");
   scanf("%s",&password);
   if(b.username==username)
   x=0;
   if(b.password==password)
   y=0;
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

}
void registera(){
 
   printf("                REGISTERATION\n");
FILE*p;


p=fopen("my register lib.txt","w");
 printf("enter username : ");
scanf("%s",b.username);
p=fopen("my register lib.txt","r+");
fwrite(&b.username,sizeof(movie),1,p);
printf("enter password : ");
scanf("%s",b.password);
p=fopen("my register lib.txt","r+");
fwrite(&b.password,sizeof(movie ),1,p);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct movie{
    char movie[100];
    char language[100];
    char genre[100];
    
}
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
   int x,y,n=1;
   

int main()
{
  
   

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

red();
printf("_______________________________________________________________________________\n");
printf("```````````````````````````````````````````````````````````````````````````````\n");
purple();
printf("                           1.ENTER YOUR LANGUAGE\n");
printf("                           2.ENTER YOUR GENRE\n");
printf("                           3.TOP/RECOMMONDED MOVIES\n");
// printf("~Star Wars:Episode VII - The Force Awakens\n~Avengers: Endgame\n~Spider-Man:No Way Home\n~Avatar\n~Top Gun: Maverick\n");
printf("                           4.ENTER YOUR LOCATION\n");
printf("                           5.SELECT THEATRE\n");
printf("                           6.SELECT PAYMENT METHOD\n");
printf("                           7.PRINT TICKET AND CODE\n");
red();
printf("________________________________________________________________________________\n");
printf("````````````````````````````````````````````````````````````````````````````````\n");
reset();

int ch;
printf("enter your choice:");
scanf("%d",&ch);

switch(ch)
{
  case 1: language();break;
  case 2: genre();break;
  case 3: topmovies();break;
  case 4: location();break;
  case 5: theater();break;
  case 6: paymen();break;
  case 7: ticket();break;
  default: printf("wrong choice..\n"); break;
}

return 0;
}

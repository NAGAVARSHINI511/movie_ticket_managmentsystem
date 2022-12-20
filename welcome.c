#include<string.h>
#include<stdlib.h>
#include <stdio.h>
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
void cyan(){
   printf("\033[0;36m");
}


void language(){}
void genre(){}
void topmovies(){}
void location(){}
void theater(){}
void paymen(){}
void ticket(){}

   


int main(){

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
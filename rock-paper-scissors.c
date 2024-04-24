#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_CRESET "\x1b[0m"
#define ANSI_COLOR_BLUE "\x1b[34m"
int main()
{
  char user;
  time_t t;
  srand((unsigned)time(&t));
  do
  {
  printf(ANSI_COLOR_CYAN "\n\nROCK PAPER AND SCISSOR\n\n");
  printf(ANSI_COLOR_BLUE "press 1 for rock 2 for paper and 3 scissor\n or press 9 to exit\n");
  int bot=(rand()%3)+1;
  scanf(" %c",&user);
  if (user=='9')
  return 0;
  if(user=='1')
{
    if (bot==3)
    printf(ANSI_COLOR_GREEN "YOU- ROCK\nBOT- SCISSOR\nYOU WON\n");
   else  if (bot==2)
    printf(ANSI_COLOR_YELLOW "YOU- ROCK\nBOT-PAPER\nBOT WON\n");
    else 
    printf(ANSI_COLOR_RED "Ooops... Both got Rock ....\nIT'S A TIE\n Try Again !!!... \n");
  }
  else if (user=='2')
  {
    if (bot==1)
    printf(ANSI_COLOR_GREEN "YOU- PAPER\nBOT- ROCK\nYOU WON\n");
    else if (bot==3)
    printf(ANSI_COLOR_YELLOW "YOU- PAPER\nBOT- SCISSOR\nBOT WON\n");
    else 
    printf(ANSI_COLOR_RED "Ooops... Both got Paper .... Try Again !!!... \n");
  }
  else if (user=='3')
  {
    if (bot==2)
    printf(ANSI_COLOR_GREEN "YOU- SCISSOR\nBOT- PAPER\nYOU WON\n");
    else if (bot==1)
    printf(ANSI_COLOR_YELLOW "YOU- SCISSOR\nBOT- ROCK\nBOT WON\n");
    else 
    printf(ANSI_COLOR_RED "Ooops... Both got Scissor .... Try Again !!!... \n");
  }
  else
  printf(ANSI_COLOR_CRESET "Invalid Response TRY AGAIN!!!");
  } while (1);
}
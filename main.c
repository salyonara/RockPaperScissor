/*Rock Paper and Scissor*/
/*UBUNTU*/
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define _ROCK 0
#define _PAPER 1
#define _SCISSOR 2
#define EXIT 8
typedef enum  {ROCK, PAPER, SCISSOR} HAND;
int main(void)
{
    int HUMANPTS, CPUPTS;
    HUMANPTS = 0;
    CPUPTS = 0;
    int CPU, HUMAN;
    srand(time(NULL));    
    while(1)
    {
        printf("HUMAN> %d ||| CPU> %d\n", HUMANPTS, CPUPTS);    //PRINT THE SCORE of BOTH HUMAN AND CPU
        CPU = rand()% 3 ;   //THE CPU 'HE IS ALIVEEEE'
        printf("Select <%d for Rock, %d for Paper and %d for Scissor> to exit press %d>", _ROCK, _PAPER, _SCISSOR, EXIT); //DISPLAY OPTIONS
        scanf("%d", &HUMAN);    //TAKE INPUT INT ONLY
        printf("\n");
        system("clear");    //CLEAR THE SCREEN
        //LETS CHECK THE HAND OF BOTH HUMAND AND CPU
        if(HUMAN == ROCK && CPU == SCISSOR) 
        {
            printf("HUMAN>ROCK CPU>SCISSOR\n");
            printf("HUMAN WON\n");
            HUMANPTS++;
        }
        else if(HUMAN == SCISSOR && CPU == ROCK)
        {
            printf("HUMAN>SCISSOR CPU>ROCK\n");
            printf("CPU WON\n");
            CPUPTS++;
        }
        else if(HUMAN == PAPER && CPU == ROCK)
        {
            printf("HUMAN>PAPER CPU>ROCK\n");
            printf("HUMAN WON\n");
            HUMANPTS++;
        }
        else if(HUMAN == ROCK && CPU == PAPER)
        {
            printf("HUMAN>ROCK CPU>PAPER\n");
            printf("CPU WON\n");
            CPUPTS++;
        }
        else if(HUMAN == SCISSOR && CPU == PAPER)
        {
            printf("HUMAN>SCISSOR CPU>PAPER\n");
            printf("HUMAN WON\n");
            HUMANPTS++;
        }
        else if(HUMAN == PAPER && CPU == SCISSOR)
        {
            printf("HUMAN>PAPER CPU>SCISSOR\n");
            printf("CPU WON\n");
            CPUPTS++;
        }
        else
        {
            printf("ITS A DRAW\n");
        }
        //WIN CONDITION TO BREAK OUT THE GAME LOOP
        if(HUMAN == 8)
        {
            break;
        }
        if(HUMANPTS == 5)
        {
            printf("HUMAN HAS WON THE GAME. CONGRATULATIONS\n");
            break;
        }
        else if(CPUPTS == 5)
        {
            printf("CPU HAS WON THE GAME. GAME OVER!\n");
            break;
        }
    }
    
    return 0;
}

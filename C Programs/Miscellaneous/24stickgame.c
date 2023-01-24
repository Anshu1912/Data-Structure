#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("here today i am going to play a game with you \n");
    printf("there are some rule of the game as follows \n");
    printf("1. the total no of sticks are 21 \n");
    printf("2. you can pickup 1-4 sticks at a time  \n");
    printf("3. we will pick sticks after each others turn \n");
    printf("4. you will lose if you picked up the last stick left \n");
    printf("5. you will lose if you picked up 0 or more than 4 sticks \n");
    printf("now lets begin the game \n after every step the total no of sticks left will be provided \n");

    int num_of_sticks = 21;
    int user;
    int me;
    printf(" \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
    printf("\n its your turn to pick up the stick ");
    printf("enter the no of stick you pick : ");
    scanf("%d",&user);
    if(user<5&&user>0)
    {
        printf("successful pick \n");
        printf("you picked up : %d sticks \n",user);
        num_of_sticks = num_of_sticks - user;
        printf(" \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
        printf("\n\t well its my turn\n");
        if(user==1)
        {
            me=4;
        }
        else if(user==2)
        {
            me=3;
        }
        else if(user==3)
        {
            me=2;
        }
        else
        {
          me=1;
        }

        printf("i pick up : %d sticks \n",me);
        num_of_sticks = num_of_sticks - me;
        printf(" \n\t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
                printf("\n its your turn to pick up the stick ");
                printf("enter the no of stick you pick : ");
                scanf("%d",&user);
                if(user<5&&user>0)
                {
                    printf("successful pick \n");
                    printf("you picked up : %d sticks \n",user);
                    num_of_sticks = num_of_sticks - user;
                    printf("\n \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
                    printf("\n\t well its my turn\n");
                    if(user==1)
                    {
                        me=4;
                    }
                    else if(user==2)
                    {
                        me=3;
                    }
                    else if(user==3)
                    {
                        me=2;
                    }
                    else
                    {
                        me=1;
                    }

                    printf("i pick up : %d sticks\n ",me);
                    num_of_sticks = num_of_sticks - me;
                    printf("\n \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);

                }
                else
                {
            printf("you broke the rules \n don't be over smart \n you lose the game  ");
            exit(0);

                }
                printf(" now its your turn to pick up the stick \n");
                printf(" enter the number of sticks you pick : ");
                scanf("%d",&user);
                    if(user<5&&user>0)
    {
        printf("\n successful pick \n");
        printf("\n you picked up : %d sticks \n",user);
        num_of_sticks = num_of_sticks - user;
        printf("\n \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
        printf("\n\t well its my turn");
        if(user==1)
        {
            me=4;
        }
        else if(user==2)
        {
            me=3;
        }
        else if(user==3)
        {
            me=2;
        }
        else
        {
          me=1;
        }

        printf("\n i pick up : %d sticks ",me);
        num_of_sticks = num_of_sticks - me;
        printf("\n \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
                printf("\n its your turn to pick up the stick ");
                printf("\n enter the no of stick you pick : ");
                scanf("%d",&user);
                if(user<5&&user>0)
                {
                    printf("successful pick \n");
                    printf("you picked up : %d sticks \n",user);
                    num_of_sticks = num_of_sticks - user;
                    printf("\n \t\t\t\t\t total sticks now :\t %d ",num_of_sticks);
                    printf("\n\t well its my turn");
                    if(user==1)
                    {
                        me=4;
                    }
                    else if(user==2)
                    {
                        me=3;
                    }
                    else if(user==3)
                    {
                        me=2;
                    }
                    else
                    {
                        me=1;
                    }

                    printf("\n i pick up : %d sticks \n",me);
                    num_of_sticks = num_of_sticks - me;
                    printf("\n \t\t\t\t\t total sticks now :\t %d \n",num_of_sticks);

                    printf("you lose the game\n");
                    printf("you will have to pick the remaining stick only which is the last one \n");
                    printf("if you think you can play better then try again ");

                }
                else
                {
            printf("you broke the rules \n don't be over smart \n you lose the game  ");
            exit(0);

                }



        }
        else
        {
            printf("you broke the rules\n don't be over smart\n you lose the game   ");
            exit(0);
        }

    }
        else
        {
            printf("you broke the rules \n don't be over smart \n you lose the game  ");
            exit(0);
        }

getch();
return 0;

}





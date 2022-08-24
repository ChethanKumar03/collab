#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\nI am Jarvis\nIf you end up with number 21 YOU LOSE\nStarting from 1 you can enter 3 digits\nDifficulty : IMPOSSIBLE  ");
    int num,i, temp = 1, mun, sum =0, choice;

    printf("Who should start ??\n Press 1 : If you want to start\n Press 2 : If you want me to start\n");
    scanf("%d", &choice);

    switch(choice)
    {
      case 1 : printf("\n\nPlease start");
               break;
      case 2 : printf("\n\nOkay then I will start with 0\nThe series is 0\nYour turn");
                break;
    }
    
    while( temp <= 21)
    {
       printf("\n\nEnter the number of digits\n ");
       scanf("%d", &num);

      if(num <0 || num >3)
      {
          printf("Learn the game and try again \n I will wait");
          exit(0);
      }
        printf("The series is : ");
      for(i=1 ; i<=temp + num-1 && i < 22; i++)
      {
          printf("%3d", i);
      }
      temp = i;

      if (temp == 22)
      {
        printf("\n\nYou have lost");
        exit(0);
      }

      if(num == 1)
        mun = 3;
     
      else if(num == 2)
        mun = 2; 

      if(num == 3)
      mun = 1;

      sum = sum + num + mun;

      printf("\n\nMy number is %d \n",sum);

        printf("The series now is : ");

      
       for(i=1 ; i<=temp + mun-1&& i < 21 ; i++)
      {
          printf("%3d", i);
      }
      temp = i;

      printf("\n\nYour turn");
    }
    return 0;
}
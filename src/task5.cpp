#include "task5.h"
#include <stdlib.h>
#include<time.h>
#include<stdio.h>


char *password(char *line)
{
   int i;
   for(i = 0; i < 8; i++)
   {
      int ran = rand () % 3;
        if(ran ==0)
      printf("%d",line[i]=rand() % (9-0+1)+0);
      else if(ran ==1)
       printf("%c",line[i]=rand() % ('z'-'a'+1)+'a');
	else
        printf("%c",line[i]=rand()%('Z'-'A'+1)+'A');
    }
	printf("\n");
    return line;
}


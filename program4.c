#include <stdio.h>

const int CITY=2;
const int WEEK=7;
void main()
{
   int temp[CITY][WEEK];
   int i ,j;
   printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
   printf("----------------T E M P E R A T U R E   R E C O R D S----------------\n");
   printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"); 
   for(i=0;i<CITY;i++)
   {   
       printf("************************\n");
       printf("~CITY %d~\n",i+1);
       printf("************************\n");
       for(j=0;j<WEEK;j++)
       {   
           printf("Day %d : ", j+1);
           scanf("%d", &temp[i][j] );
       }
       printf("\n\n");
   }

   int min,max,c,daymax;
   for(c=0;c<CITY;c++)
   {
       max = temp[c][0];
       for(j=0;j<WEEK;j++)
       {
            if(temp[c][j] > max)
            {
                max = temp[c][j];
                daymax=j+1;
            }
        }
        printf("----------------------------------------------------------------------\n");
        printf("Highest temperature of City%d is %d on day %d\n",c+1,max,daymax);
        printf("----------------------------------------------------------------------\n");
        min = temp[c][0];
        for(j=0;j<WEEK;j++)
        {
            if(temp[c][j] < min)
   	    {
                min = temp[c][j];
	    }
	        
        }
	printf("----------------------------------------------------------------------\n");
        printf("minimum temperature of City%d is %d\n",c+1,min);
        printf("----------------------------------------------------------------------\n");
   }
}

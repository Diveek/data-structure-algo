/* program to declaration and accessing 2D array. */

#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int arr[ROW][COL]={ {1,2,4},{6,5,4},{9,8,7}};

    int i,j;

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
          {  printf("%3d",arr[i][j]);
          }
          printf("\n");
    }
    
    
    
    return 0;

}
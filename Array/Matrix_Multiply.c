/* for Matrices multiplication, the no. of cols in 1st matrix should be equal to the no. of rows in 2nd matrix. */

/* a[2][2] x b[2][3]*/

#include <stdio.h>
#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 3

int main()
{
    int a[ROW1][COL1],b[ROW2][COL2],mat3[ROW1][COL2];
    int i,j,k;
    printf("Enter matrix mat1(%dx%d) row-wise : \n",ROW1,COL1);
        for(i=0;i<ROW1;i++)
            for(j=0;j<COL1;j++)
                scanf("%d",&a[i][j]);
     printf("Enter matrix mat2(%dx%d) row-wise : \n",ROW2,COL2);
        for(i=0;i<ROW2;i++)
            for(j=0;j<COL2;j++)
                scanf("%d",&b[i][j]);

    /*Multiplication*/

        for(i=0;i<ROW1;i++)
        {
            for(j=0;j<COL2;j++)
            {   
                mat3[i][j]=0;
                for(k=0;k<COL1;k++)
                {
                    mat3[i][j] += a[i][k]*b[k][j];
                }
            }
        }


         printf("Multiply :\n");
        for(i=0;i<ROW1;i++)
            for(j=0;j<COL2;j++)
             {  printf("%4d",mat3[i][j]);}
              printf("\n");
                

    
    return 0;
}
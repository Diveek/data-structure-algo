#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int mat1[ROW][COL] ,mat2[ROW][COL],i,j, sumMat[ROW][COL];
    printf("Enter Matrix mat1[%d][%d] row-wise:\n", ROW,COL);

        for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    scanf("%d",&mat1[i][j]);
                }
                printf("\n");
        }

         printf("Enter Matrix mat2[%d][%d] row-wise:\n", ROW,COL);

        for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    scanf("%d",&mat2[i][j]);
                }
                printf("\n");
        }

        printf("Mat1 : ");
             for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    printf("%3d",mat1[i][j]);
                }
                printf("\n");
        }

         printf("Mat2 : ");
             for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    printf("%3d",mat2[i][j]);
                }
                printf("\n");
        }

/*Addtion */

       for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    sumMat[i][j]=mat1[i][j]+mat2[i][j];
                }
               
        }


        printf("Addition : ");
             for(i=0; i<ROW;i++)
        {
            for(j=0;j<COL;j++)
                {
                    printf("%3d",sumMat[i][j]);
                }
                printf("\n");
        }
        



    return 0;
}
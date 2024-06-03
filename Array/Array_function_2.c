/* Passing whole Array to a function.*/

#include<stdio.h>       /*program to calculate sum of integer array element.*/
#define SIZE 5
void sumOfArray(int arr[]);

int main(){

    int arr[SIZE]={ 18,12,90,4,92};
    int i;
    
    sumOfArray(arr);
    printf("Conetns of Array :");
    for(i=0;i<SIZE;i++)
    {
        printf("%d,",arr[i]);
    }

    return 0;
}

void sumOfArray(int arr[] )
{
    int i;
    int sum=0;


    for(i=0;i<SIZE;i++)
    {
        sum=sum+arr[i];
    }

    printf("The Sum of Array Element: %d\n",sum);
}
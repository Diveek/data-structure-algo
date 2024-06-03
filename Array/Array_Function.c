/* Passing individual Array element to a function.*/

#include <stdio.h>      /* program to check  even/odd number */
#define SIZE 5
void Check(int);

int main()
{
    int arr[SIZE]={2,3,4,5,7};
    int i;
    for(i=0;i<5;i++)
    {
        Check(arr[i]);
    }   

    return 0; 

}

void Check(int n)
{
    if(n%2==0)
        printf("%d is a Even number.\n",n);
    else    
        printf("%d is odd number.\n",n);
}
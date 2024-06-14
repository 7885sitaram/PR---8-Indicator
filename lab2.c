#include<stdio.h>

int main(){

    int n , n1;

    printf("Enter row size ");
    scanf("%d", &n);

    printf("Enter column size ");
    scanf("%d", &n1);

    int arr[n][n1];

    printf("Enter array elements ");

    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j <n1; j++)
        {
           scanf("%d", &arr[i][j]);
        }
        
    }

    int *ptr[n][n1];


    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j <n1; j++)
        {
           ptr[i][j] = &arr[i][j];
        }
        
    }
    printf("\n");


    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j <n1; j++)
        {
          printf("a[%d][%d] = %d \n",i , j , *(ptr[i][j]));
        }
        printf("\n");
        
    }

    printf("Cubes of all elements are \n");

    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j <n1; j++)
        {
          printf("a[%d][%d] = %d \n",i , j , *(ptr[i][j])**(ptr[i][j])**(ptr[i][j]));
        }
        printf("\n");
        
    }

    return 0;


}

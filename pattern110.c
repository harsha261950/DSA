#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

// C Program to to find the array of n numbers using array

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, j;
    float num[0], sum = 0.0, avg;
    printf("Enter the number of element : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d enter number : ", i + 1);
        scanf("%d", &num[i]);   
        sum = sum + num[i];
    }
    avg = (sum / n);
    printf("Average = %0.2f", avg);
    return 0;
}
#include<stdio.h>
void main()

{
    int a[5],i,n,j=1;
    printf( "\n enter the no in array\n");
    for(i=0;i<5;i++)
        scanf("%d" ,&a[i]);
    printf("\nElements of Array\n");
    for(i=0;i<5;i++)
        printf("%d " ,a[i]);
    printf("\n display elements of array\n");
    for(i=4;i>=0;i--)
        printf("%d  ",a[i]);
}

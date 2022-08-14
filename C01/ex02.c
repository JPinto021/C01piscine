#include<stdio.h>
#include<stdio.h>

void ft_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;


}
int main()
{
    int c = 50; 
    int d =24;
    ft_swap(&c,&d);
    printf("%d , %i", c, d);
    return 0;
}
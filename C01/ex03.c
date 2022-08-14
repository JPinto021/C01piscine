#include<unistd.h>
#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *a = a/b;
    *b = a%b;
}
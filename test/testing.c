#include <limits.h>
#include <stdio.h>
#include "../main.h"


int main(void)
{
    int len;

    len = _printf("Let's try to print a simple sentence.\n");
    len = _printf("Length1:[%d, %i]\n", len, len);
    _printf("Length1:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);

    return (0);
}
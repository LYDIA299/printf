#include <limits.h>
#include <stdio.h>
#include "main.h"


int main(void)
{
    int len;
    int len2;

    /* Number 1*/

    /* Formatter for (%, c, s)*/
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Number 1*/
    /* Formatter for (d, i)*/
    len = _printf("Let's try to print a simple sentence.\n");
    len = _printf("Length1:[%d, %i]\n", len, len);
    _printf("Length1:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);


     

    /* Number 2*/
     _printf("%b\n", 98);

     /* Task 3*/
     _printf("%u\n", 34);
       _printf("%o\n", 21);
        _printf("%x\n", 552);
         _printf("%X\n", 654);
     
    
    return (0);
}
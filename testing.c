#include <limits.h>
#include <stdio.h>
#include "main.h"


int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

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

    /* Number 2*/
    /* Formatter for (d, i)*/
    len = _printf("Let's try to print a simple sentence.\n");
    len = _printf("Length1:[%d, %i]\n", len, len);
    _printf("Length1:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);


     

    /* Number 3 ???????*/
     /*_printf("%b\n", 98);*/

     /* Task 4*/
 _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    /* Task 5*/
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    /* Task 6*/
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
   
    
    return (0);
}
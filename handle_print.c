#include "main.h"

/**
 * handle_print - This function prints an argument based on its type
 * @fmt: Formatted string
 * @list: List of arguments to be printed
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: This function will calculates active flags
 * @width: this function receives the width.
 * @precision: this function handles pecification of precisions
 * @size: Size specifier
 * Return: 1 or 2;
*/

int handle_print(const char *fmt, int *ind, va_list list
, char buffer[], int flags, int width, int precision, int size)
{
    int i, u_len = 0, printed_chars = -1;
    fmt_t fmt_types[] = 
    {
        {'d', print_int}, {'i', print_int}, 
        {'b', print_binary}, {'u', print_unsigned},
        {'\0', NULL}
        
    };

    for (i = 0; fmt_types[i].fmt != '\0'; i++)
        if (fmt[*ind] == fmt_types[i].fmt)
            return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
    if (fmt[*ind] == '\0')
    {
        if (fmt[*ind] == '\0')
            return (-1);
        else if(width)
        {
            --(*ind);
            while (fmt[*ind] != ' ' && fmt[*ind] != '%')
                --(*ind);
            if (fmt[*ind] == ' ')
                --(*ind);
            return(1);
        }

        u_len += write(1, &fmt[*ind], 1);
        return (u_len);
    } 
    return (printed_chars);  
    
}
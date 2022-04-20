#include "main.h"
#include <stdlib.h>

/**
 * get_func - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*get_func(const char *format))(va_list)
{
        unsigned int i;
        print_t type[] = {
                {"c", print_c},
                {"s", print_s},
                {"i", print_i},
                {"d", print_d},
                {"u", print_u},
                {"b", print_b},
                {"o", print_o},
                {"x", print_x},
                {"X", print_X},
                {"p", print_p},
                {"S", print_S},
                {"r", print_r},
                {"R", print_R},
                {"%", print_percent},
                {NULL, NULL}
        };

        i = 0;
        while (type[i].t[0])
        {
                if (type[i].t[0] == *format)
                {
                        break;
                }
                i++;
        }
        return (type[i].f);
}

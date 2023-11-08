#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function for the requested operation.
 * @s: The operator provided as an argument.
 *
 * Return: A pointer to the function that corresponds to the given operator.
 */
int (*get_op_func(char *s))(int, int)
{
    /* Define an array of structs for each operator and its function */
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;

    while (i < 5)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            if (i >= 3 && ops[i].f == op_div && ops[i].f == op_mod)
            {
                /* Check for division and modulo by zero */
                printf("Error\n");
                exit(100);
            }
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);  /* Return a NULL pointer */
}

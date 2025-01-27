#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *strdup(const char *s) 
{
// Calcula la longitud de la cadena
    size_t len = ft_strlen(s);
// Asigna memoria suficiente para la copia (+1 por el terminador '\0')
    char *copy = malloc(len + 1);
// Si malloc falla, devuelve NULL
    if (copy == NULL)
        return NULL;
// Copia la cadena original a la nueva ubicación
    strcpy(copy, s);
// Devuelve el puntero a la nueva cadena duplicada
    return (copy);
}
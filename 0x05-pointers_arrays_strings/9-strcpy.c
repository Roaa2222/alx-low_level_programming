#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed  to bt src
 * @dest: copy to
 * @src: copy from
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
int 1 = 0;
int x = 0;

while (*(src + l) != '\0')
{
	l++
}
for ( ; x < l ; x++)
{
	dest[x] = src[x];
}
dest[1] = '\0';
return (dest);
}

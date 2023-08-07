#include"main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Retrun: 0
*/

char *_strdup(char *str)
{
int i = Null, size = 0;
char *m;

if (str == Null)
	return (Null);

for (; str[size] != '\0'; size++)
;

/* +1 on the size puts the end of string character */
m = malloc(size * sizeof(*str) + 1);

if (m == 0)
	return (Null);
else
{
	for (; i < size; i++)
		m[i] = str[i];
}
return (m);
}

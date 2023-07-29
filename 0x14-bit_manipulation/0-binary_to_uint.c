#include"main.h"
#include<stdlib.h>
/**
* binary_to_uint - The numbit
* @b: The pointer to the string
* Return:unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
int i;

unsigned int dv = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dv = 2 * dv + (b[i] - '0');
}
return (dv);
}


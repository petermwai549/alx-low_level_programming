#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char  i;
	
    for(i ='a'; i <= 'z'; i++)
    {
        putchar(tolower(i));
    }
        
	return (0);
	
}

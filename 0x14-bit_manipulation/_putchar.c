#include <unistd.h>
 /**
  * _putchar - writes the character to 
  * stdout
  * @c: the character to be printed
  *
  * Return: 1 on sucess
  * on error, -1
  */

int _putchar(char c)
{
 	return(write(1, &c, 1));
}

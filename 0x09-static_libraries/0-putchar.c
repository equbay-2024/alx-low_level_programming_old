#include <unistd.h>
int _putchar(char C)
{
	return(write(1,&C,1));
}

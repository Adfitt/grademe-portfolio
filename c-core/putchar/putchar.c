#include <unistd.h>

int	gm_putchar(int c)
{
	(void)c;
	char c1;
	c1 = c;
	write (1, &c1, 1);
	return (c);
}

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char c = 'Z';
	int i = 0;
	while(c >= 'A')
	{
		if(i % 4 < 2)
			write(1, &c, 1);
		else
		{
			c += 32;
			write(1, &c, 1);
			c -= 32;
		}
		c--;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

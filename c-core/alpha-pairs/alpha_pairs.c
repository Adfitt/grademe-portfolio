#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i = 0;
	char c = 'a';

	while (c <= 'z')
	{
		if (i % 2 == 0)
		{
			write (1, &c, 1);
			write (1, &c, 1);
		}
		else
		{
			c -= 32;
			write (1, &c, 1);
			write (1, &c, 1);
			c += 32;
		}
		i++;
		c++;
	}
	write(1, "\n", 1);
	return (0);
}

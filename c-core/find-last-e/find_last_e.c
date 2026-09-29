#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int pos = -1;

	if (argc != 2)
		write(1, "e\n", 2);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'e')
				pos = i;
			i++;
		}
		if (pos == -1)
			write(1, "\n", 1);
		else
			write(1, "e\n", 2);
	}
	return (0);
}

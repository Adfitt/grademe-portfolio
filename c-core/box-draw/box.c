#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	width;
	int	height;
	int	row;
	int	col;
	char	c;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}

	width = atoi(argv[1]);
	height = atoi(argv[2]);

	if (width <= 0 || height <= 0)
		return (0);

	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			if (row == 0 || row == height - 1)
			{
				if (col == 0 || col == width - 1)
					c = '+';
				else
					c = '-';
			}
			else
			{
				if (col == 0 || col == width - 1)
					c = '|';
				else
					c = ' ';
			}
			write(1, &c, 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return (0);
}

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int pos = -1;
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return(0);
	}
	while(argv[1][i] != '\0')
	{
		if(argv[1][i] == 'n')
		{
			pos = i;
			break;
		}
		i++;
	}
	if (pos == -1)
		write(1, "\n", 1);
	else
	{
		write(1, &argv[1][pos], 1);
		write(1, "\n", 1);
	}
	return (0);
}

#include <unistd.h>

int		search2(char *str, char *str2, int i)
{
	int j;

	j = 0;
	while (str2[j] != '\0')
	{
		if (str[i] == str2[j])
			return (1);
		j++;
	}
	return (0);
}

int		search1(char *str, int i)
{
	int j;

	j = 0;
	if (i == 0)
		return (1);
	while (j < i)
	{
		if (str[i] == str[j] && j < i)
			return (0);
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (search1(argv[1], i) == 1 && search2(argv[1], argv[2], 1) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (search2(argv[2], argv[1], i) == 0 && search1(argv[2], 1) == 1)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	int		div;

	i = 0;
	div = 128;
	while (i < 8)
	{
		if (octet >= div)
		{
			write(1, "1", 1);
			octet = octet - div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
		i++;
	}
}

int		main(void)
{
	print_bits(1);
}
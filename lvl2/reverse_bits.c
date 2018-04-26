unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	int		div;
	unsigned char	*str;

	i = 7;
	div = 128;
	while (i >= 0)
	{
		if (octet > div)
		{
			str[i] == '1';
			octet = octet - div;
		}
		else
			str[i] == '0';
		div = div / 2;
		i--;
	}
	return (str);
}

int		main(void)
{
	printf("%d", reverse_bits(128));
}
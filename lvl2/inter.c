/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:00:55 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/06 23:45:25 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check( char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
		{
			return (0);
		}
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_check(argv[1], argv[1][i], i) == 1)
			{
				j = 0;
				while (argv[2][j] != '\0')
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

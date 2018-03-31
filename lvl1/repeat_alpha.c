/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:49:44 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/03/30 11:20:13 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int rep;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rep = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] - 97;
				while (rep >= 0)
				{
					write(1, &argv[1][i], 1);
					rep--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] - 65;
				while(rep >= 0)
				{
					write(1, &argv[1][i], 1);
					rep--;
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:05:01 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/02 16:34:55 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int up;
	int dn;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			j = argv[1][i];
			if ((j >= 'a' && j <= 'y') || (j >= 'A' && j <= 'Y'))
			{
				up = argv[1][i] + 1	;
				write(1, &up, 1);
			}
			else if (j == 'z' || j == 'Z')
			{
				dn = argv[1][i] - 25;
				write(1, &dn, 1);
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

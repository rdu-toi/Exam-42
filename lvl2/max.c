/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:38:48 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/07 06:19:53 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= len)
	{
		while (tab[i] >= tab[j] && tab[j] >= tab[i])
		{
			if (tab[i] >= tab[j] && tab[j] >= tab[i])
			{
				return (tab[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	int *i;

	i = max("12", 2);
	printf("%d", max("12", 2));
}

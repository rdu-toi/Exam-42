/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 03:44:27 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/23 12:51:25 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		ints;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ints = (ints * 10) + (str[i] - '0');
		i++;
	}
	return (ints * sign);
}

int		main(void)
{
	printf("%d", ft_atoi(""));
}

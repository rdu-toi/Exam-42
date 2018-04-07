/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdu-toi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:41:02 by rdu-toi           #+#    #+#             */
/*   Updated: 2018/04/06 07:37:15 by rdu-toi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char *p_start;
	char *p_end;
	char temp;

	p_start = str;
	p_end = p_start + ft_strlen(str) - 1;
	while (p_end > p_start)
	{
		temp = *p_start;
		*p_start = *p_end;
		*p_end = temp;
		p_start++;
		p_end--;
	}
	return (str);
}	
int		main(void)
{
	char src[] = "abc123";
	
	printf("%s", ft_strrev(src));
}

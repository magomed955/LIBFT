/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:11:25 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/28 14:46:55 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
	{
		count++;
		if (i < 0)
			i *= -1;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	nb = n;
	len = ft_digit_count(nb);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
	}
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

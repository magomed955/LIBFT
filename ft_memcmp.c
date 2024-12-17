/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:58:33 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/29 14:45:39 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pointer1, const void *pointer2, size_t size )
{
	unsigned char		*s1;
	unsigned char		*s2;
	size_t				i;

	i = 0;
	s1 = (unsigned char *)pointer1;
	s2 = (unsigned char *)pointer2;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

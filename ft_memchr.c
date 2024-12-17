/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:20:42 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/21 14:34:57 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr( const void *block, int c, size_t n )
{
	const unsigned char	*ptr = block;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

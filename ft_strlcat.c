/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:24:03 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/11/06 13:43:24 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat( char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		t1_dest;
	size_t		t2_src;

	t1_dest = ft_strlen(dest);
	t2_src = ft_strlen(src);
	i = 0;
	if (size < t1_dest + 1)
		return (size + t2_src);
	if (size > t1_dest + 1)
	{
		while (src[i] != '\0' && t1_dest + 1 + i < size)
		{
			dest[t1_dest + i] = src[i];
			i++;
		}
	}
	dest[t1_dest + i] = '\0';
	return (t1_dest + t2_src);
}

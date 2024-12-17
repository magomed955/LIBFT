/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:42:30 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/25 16:05:12 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total;

	total = num * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	if (total == 0)
		return (ptr);
	ft_bzero(ptr, total);
	return (ptr);
}

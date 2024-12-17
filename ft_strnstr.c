/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:42:39 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/24 16:49:26 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n && s2[j])
		{
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

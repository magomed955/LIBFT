/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:13:27 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/28 12:11:52 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(source) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (source[i])
	{
		str[i] = source[i];
		i++;
	}
	str[ft_strlen(source)] = '\0';
	return (str);
}

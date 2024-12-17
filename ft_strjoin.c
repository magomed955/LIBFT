/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:38:31 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/28 14:54:49 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		s1_long;
	int		s2_long;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
	{
		if (!s1)
			return (ft_strdup(s2));
		else
			return (ft_strdup(s1));
	}
	s1_long = ft_strlen(s1);
	s2_long = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (s1_long + s2_long + 1));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, s1_long + 1);
	ft_strlcat(s3 + (s1_long), s2, s2_long + 1);
	return (s3);
}

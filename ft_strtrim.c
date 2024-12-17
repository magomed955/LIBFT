/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:17 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/10/28 12:27:53 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	char	*s2;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	debut = 0;
	while (s1[debut] && ft_strchr(set, s1[debut]))
		debut++;
	fin = ft_strlen(s1);
	while (fin > debut && ft_strchr(set, s1[fin - 1]))
		fin--;
	s2 = (char *)malloc(sizeof(char) * (fin - debut + 1));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + debut, fin - debut + 1);
	return (s2);
}

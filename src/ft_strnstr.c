/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 08:01:45 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/12 08:05:29 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t ln)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] && (i < ln))
	{
		while ((big[i + j] == little[j]) && little[j] && ((i + j) < ln))
			j += 1;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i += 1;
	}
	if (!little[0])
		return ((char *)&big[i]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 07:54:18 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/12 07:59:54 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *largestring, const char *smallstring)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!smallstring[0])
		return ((char *)&largestring[i]);
	while (largestring[i])
	{
		while ((largestring[i + j] == smallstring[j]) && smallstring[j])
			j += 1;
		if (!smallstring[j])
			return ((char *)&largestring[i]);
		j = 0;
		i += 1;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 23:44:13 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/11 23:45:33 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char *udst;
	unsigned char *usrc;
	while (i < n)
	{
		udst[i] = usrc[i];
		i += 1;
	}
	return (dst);
}

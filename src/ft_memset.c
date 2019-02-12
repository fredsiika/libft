/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 23:07:44 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/11 23:09:13 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;
	unsigned char tmpc;

	i = 0;
	tmp = (char*)b;
	tmpc = (unsigned char)c;
	while (len > 0)
	{
		tmp[i] = tmpc;
		i++;
		len--;
	}
	return (b);
}

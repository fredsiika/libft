/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredsiik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 04:06:20 by fredsiik          #+#    #+#             */
/*   Updated: 2019/02/13 04:10:03 by fredsiik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (1);
	if (s1 && s2)
	{
		while ((*s1 && (*s1 == *s2)) && --n)
		{
			s1 += 1;
			s2 += 1;
		}
		if (!(*s1 - *s2))
			return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apantiez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 17:05:00 by apantiez          #+#    #+#             */
/*   Updated: 2014/05/23 17:05:00 by apantiez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b != 0)
	{
		while (i < len)
		{
			*((char *)b + i) = c;
			i++;
		}
	}
	return (b);
}

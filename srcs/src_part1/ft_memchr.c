/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:21:20 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/13 15:36:39 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int sc, size_t size)
{
	size_t	n;

	n = 0;
	while (n < size)
	{
		if (*((char *)mb + n) == (char)sc)
			return ((void *)mb + n);
		n++;
	}
	return (NULL);
}

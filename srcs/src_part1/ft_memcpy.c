/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:52 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/13 15:47:09 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size )
{
	size_t	n;

	n = 0;
	if (dest == src || !size)
		return (dest);
	while (n < size)
	{
		*((char *)dest + n) = *((char *)src + n);
		n++;
	}
	return (dest);
}

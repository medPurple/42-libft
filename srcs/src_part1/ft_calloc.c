/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:18:25 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/15 14:58:13 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size)
{
	void	*buff;

	if (size != 0)
	{
		if (count < (SIZE_MAX / size))
		{
			buff = (malloc(count * size));
			if (!(buff))
				return (NULL);
			ft_bzero(buff, count * size);
			return (buff);
		}
	}
	return (NULL);
}
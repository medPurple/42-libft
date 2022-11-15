/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:07:49 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/13 15:51:12 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	size;

	if (!s)
		return (NULL);
	if (s == NULL)
		return (NULL);
	size = 0;
	while (size < n)
	{
		((char *)s)[size] = c;
		size++;
	}
	return (s);
}

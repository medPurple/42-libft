/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:56:32 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/13 16:28:02 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen((char *)find);
	if (find == NULL || size == 0)
		return ((char *)src);
	if (size > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&*src, (char *)find, size) == 0)
		{
			if ((i + size) > len)
				return (NULL);
			return ((char *)&*src);
		}
		i++;
		src++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:55:43 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/13 16:19:35 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int dest)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)dest)
			return ((char *)str);
		str++;
	}
	if (dest == 0)
		return ((char *)str);
	return (NULL);
}

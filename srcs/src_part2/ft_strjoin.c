/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:15:36 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/15 12:11:33 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*stmp;
	size_t		i;
	size_t		sizes1;
	size_t		sizes2;

	i = 0;
	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	stmp = malloc(sizes1 + sizes2 + 1);
	if (!stmp)
		return (NULL);
	while (i < sizes1)
	{
		stmp[i] = s1[i];
		i++;
	}
	while (i < (sizes1 + sizes2))
	{
		stmp[i] = s2[i - sizes1];
		i++;
	}
	stmp[i] = 0;
	return (stmp);
}

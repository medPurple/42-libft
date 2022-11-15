/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:47:25 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/14 14:06:40 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst)
        return (NULL);
    if(!*lst)
        return (NULL);
    while((*lst)->next)
        lst = (*lst)->next;
    (*lst)->next = new;
}
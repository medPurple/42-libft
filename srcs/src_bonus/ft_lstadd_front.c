/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:02:35 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/14 11:12:19 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!(lst))
        return (NULL);
    /*if(!(new))
    {
        new = *lst;
        return(NULL);
    }*/
    new->next=*lst;
    *lst = new;
}
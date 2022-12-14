/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmessmer <wmessmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:23:41 by wmessmer          #+#    #+#             */
/*   Updated: 2022/11/28 15:16:15 by wmessmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

int			ft_printf(const char *s, ...);
int			ft_putchar_fd(int c);
int			ft_putstr_fd(char *s);
size_t		ft_strlen(const char *s);
int			ft_put_di(unsigned int i);
int			void_to_hexa(unsigned long long p);
int			put_x(void);
int			nb_to_hexa(unsigned int a, const char type);
int			exe_flags(const char a, va_list s);
int			hexa_len(unsigned int num);
int			ft_print_hex(unsigned int a, const char type);
void		ft_print_hexavoid(uintptr_t a);
int			hexavoid_len(uintptr_t a);
size_t		nblen(int n);
char		*ft_itoa(int n);
char		*ft_unsigned_itoa(unsigned int i);
int			ft_put_u(unsigned int i);
int			ft_len_u(unsigned int u);

#endif

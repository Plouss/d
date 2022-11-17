/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:03:37 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/17 13:23:16 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int		ft_printchar(char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
int		ft_checklen(int n);
int		ft_printnbr(int len);
char	*ft_itoa(int n);
int		ft_printstr(char *str);
int		ft_printf(const char *str, ...);
int     ft_printpercent(void);
int     ft_num_len(unsigned int n);
char    *ft_uitoa(unsigned int n);
int     ft_printunsigned(unsigned int n);
#endif
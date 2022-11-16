/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:50:46 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/16 16:49:02 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	format(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
	{
		print_length += ft_printstr(va_arg(args, char *));
	}
	else if (format == 'd')
	{
		print_length += ft_printnbr(va_arg(args, int));
	}
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	print_length;

	print_length = 0;
	i = 0;
	va_list		args;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += format(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
#include <stdio.h>
int main(void)
{
	ft_printf("ft_caca : %c %c %c", '0', '0', '1');
	ft_printf("ft_printf : %c %c ", 'd', 'f');
	// printf("\n printf   : %c %c %c ", '0', '1', 1);
}
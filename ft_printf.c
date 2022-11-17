/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:50:46 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/17 13:32:08 by ouel-maj         ###   ########.fr       */
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
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == '%')
		print_length += ft_printpercent();
	else if(format == 'u')
		print_length += ft_printunsigned(va_arg(args, unsigned long long));
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
// #include <stdio.h>
// int main(void)
// {
// 	ft_printf("ft_printf : %u", 4294967294);
// 	printf("\n printf   : %u", 4294967294);
// }
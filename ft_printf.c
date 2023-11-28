/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spascual <spascual@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/1 18:49:27 by spascual           #+#    #+#             */
/*   Updated: 2023/10/1 14:11:37 by spascual          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifiers(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += handle_char(args);
	else if (specifier == 's')
		count += handle_string(args);
	else if (specifier == 'p')
		count += handle_ptr(args);
	else if (specifier == 'd' || specifier == 'i')
		count += handle_id(args);
	else if (specifier == 'u')
		count += handle_u(args);
	else if (specifier == 'x')
		count += handle_hex(args);
	else if (specifier == 'X')
		count += handle_hexup(args);
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i; 
	int		count;

	va_start(args, format);
	if (!format)
		return (-1);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_specifiers(format[i++], args);
		}
		else
			count += ft_putchar(format[i++]);
	}
	va_end(args);
	return (count);
}
/*
int main ()
{
	char*	s2 = "hi";

	ft_printf(" %s %s ", " - ", "");
	printf("\n");
	printf(" %s %s ", " - ", "");

	printf("\n");
	printf("\n");

	ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf("\n");
	printf(" %s %s %s %s %s", " - ", "", "4", "", s2);

	printf("\n");
	printf("\n");
	printf("\n");

	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
}*/

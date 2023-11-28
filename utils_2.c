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

int	handle_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}

int	handle_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (str != NULL)
		return (ft_putstr(str));
	else
		return (ft_putstr("(null)"));
}

int	handle_ptr(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	return (ft_puthex_ptr((unsigned long long int)ptr) + 2);
}

int	handle_id(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	return (ft_putnbr(nb, 10, 0));
}

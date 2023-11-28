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

int	handle_u(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr(nb, 10, 0));
}

int	handle_hex(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr(nb, 16, 0));
}

int	handle_hexup(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr(nb, 16, 1));
}

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar((int)str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(long nb, int base, int boolean)
{
	char	*symbols;
	int		count;

	if (boolean == 1)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (nb < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr(-nb, base, boolean) + 1);
	}
	else if (nb < base)
		return (ft_putchar(symbols[nb]));
	else
	{
		count = ft_putnbr((nb / base), base, boolean);
		return (count + ft_putnbr((nb % base), base, boolean));
	}
}

int	ft_puthex_ptr(unsigned long long int nb)
{
	char	*symbols;
	int		count;

	symbols = "0123456789abcdef";
	if (nb < 16)
		return (ft_putchar(symbols[nb]));
	else
	{
		count = ft_puthex_ptr(nb / 16);
		return (count + ft_puthex_ptr(nb % 16));
	}
}

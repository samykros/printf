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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_strlen(char *str);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long nb, int base, int boolean);
int	ft_puthex_ptr(unsigned long long int nb);
int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_ptr(va_list args);
int	handle_id(va_list args);
int	handle_u(va_list args);
int	handle_hex(va_list args);
int	handle_hexup(va_list args);
int	handle_specifiers(char specifier, va_list args);
int	handle_format(const char *format, va_list args);
int	ft_printf(const char *format, ...);

#endif

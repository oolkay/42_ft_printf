/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <olkayomer@42.kocaeli>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:39:36 by oolkay            #+#    #+#             */
/*   Updated: 2022/12/07 15:26:55 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_pointer(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 16)
		i += ft_putnbr_pointer(nbr / 16);
	else
		i = write (1, "0x", 2);
	write (1, &"0123456789abcdef"[nbr % 16], 1);
	return (i + 1);
}

int	ft_putnbr_hex(unsigned int nbr, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
	{
		if (nbr >= 16)
			i += ft_putnbr_hex(nbr / 16, c);
		write (1, &"0123456789abcdef"[nbr % 16], 1);
	}
	else if (c == 'X')
	{
		if (nbr >= 16)
			i += ft_putnbr_hex(nbr / 16, c);
		write (1, &"0123456789ABCDEF"[nbr % 16], 1);
	}
	return (i + 1);
}

int	ft_putnbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		i = write (1, "-2147483648", 11);
		return (i);
	}
	if (nbr < 0)
	{
		i += write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		i += ft_putnbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
	return (i + 1);
}

int	ft_unsigned_nbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr >= 10)
		i = ft_unsigned_nbr(nbr / 10);
	write (1, &"0123456789"[nbr % 10], 1);
	return (i + 1);
}

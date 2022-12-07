/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <olkayomer@42.kocaeli>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:27:21 by oolkay            #+#    #+#             */
/*   Updated: 2022/12/07 15:25:01 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_write(va_list ag, char ch)
{
	int	len;

	len = 0;
	if (ch == 'c')
		len += ft_putchar(va_arg(ag, int));
	else if (ch == 's')
	{
		len += ft_putstr(va_arg(ag, char *));
	}
	else if (ch == 'p')
		len += ft_putnbr_pointer(va_arg(ag, unsigned long));
	else if (ch == 'd' || ch == 'i')
		len += ft_putnbr(va_arg(ag, int));
	else if (ch == 'u')
		len += ft_unsigned_nbr(va_arg(ag, unsigned int));
	else if (ch == 'x')
		len += ft_putnbr_hex(va_arg(ag, unsigned int), ch);
	else if (ch == 'X')
		len += ft_putnbr_hex(va_arg(ag, unsigned int), ch);
	else
		len += write (1, "%", 1);
	return (len);
}

bool	ft_check_flag(const char *s, int i)
{
	return (s[i] == '%' && (s[i + 1] == 'c' || s[i + 1] == 's'
			|| s[i + 1] == 'p' || s[i + 1] == 'd' || s[i + 1] == 'i'
			|| s[i + 1] == 'u' || s[i + 1] == 'x' || s[i + 1] == 'X'
			|| s[i + 1] == '%'));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	ag;

	i = 0;
	len = 0;
	va_start (ag, s);
	while (s[i])
	{
		if (ft_check_flag(s, i))
			len += ft_write(ag, s[++i]);
		else if (s[i] != '%')
			len += write(1, &s[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
//#include <stdio.h>
//int	main(void)
//{	
//	int i,j;
//	
//	i = ft_printf("%x", -1);
//	j = printf("%x", -1);
//
//	printf("\n%d %d", i , j);
//}

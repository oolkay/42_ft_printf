/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oolkay <olkayomer@42.kocaeli>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:07:33 by oolkay            #+#    #+#             */
/*   Updated: 2022/12/07 15:35:11 by oolkay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h> 
# include <stdbool.h>

int		ft_putstr(char *str);
int		ft_putnbr_pointer(unsigned long nbr);
int		ft_putnbr_hex(unsigned int nbr, char c);
int		ft_putnbr(int nbr);
int		ft_unsigned_nbr(unsigned int nbr);
int		ft_putchar(char c);
int		ft_write(va_list ag, char ch);
bool	ft_check_flag(const char *s, int i);
int		ft_printf(const char *s, ...);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:32 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/02 23:38:35 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

# define LOW_HEX "0123456789abcdef" 
# define UPP_HEX "0123456789ABCDEF"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char  *, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int number);
int	ft_putunsnb(unsigned int number);
int	ft_hexdec(unsigned int n, char type);
int	ft_adress(void *adress);

#endif
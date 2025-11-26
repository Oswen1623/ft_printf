/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:16:23 by lucinguy          #+#    #+#             */
/*   Updated: 2025/11/26 18:12:25 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checktype(char c, va_list args, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd_pf(va_arg(args, int), fd));
	else if (c == 's')
		return (ft_putstr_fd_pf(va_arg(args, char *), fd));
	else if (c == 'p')
	{
		ft_putstr_fd_pf("0x", 1);
		return ((ft_putnbr_base_fd(va_arg(args, unsigned long),
					"0123456789abcdef", fd)) + 2);
	}
	else if ((c == 'd') || (c == 'i'))
		return (ft_putnbr_base_fd(va_arg(args, int), "0123456789", fd));
	else if (c == 'u')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int), "0123456789",
				fd));
	else if (c == 'x')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int),
				"0123456789abcdef", fd));
	else if (c == 'X')
		return (ft_putnbr_base_fd(va_arg(args, unsigned int),
				"0123456789ABCDEF", fd));
	else if (c == '%')
		return (ft_putchar_fd_pf('%', fd));
	else
		return (0);
}

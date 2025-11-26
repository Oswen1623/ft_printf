/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:27:02 by lucinguy          #+#    #+#             */
/*   Updated: 2025/11/26 16:40:32 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base_fd(long n, char *base, int fd)
{
	int		len;
	size_t	res;

	len = 0;
	while (base[len])
		len++;
	res = 0;
	if (n < 0)
	{
		res += write(fd, "-", 1);
		n = -n;
	}
	if (n >= len)
		res += ft_putnbr_base_fd(n / len, base, fd);
	res += write(fd, &base[n % len], 1);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:31:26 by lucinguy          #+#    #+#             */
/*   Updated: 2025/11/25 15:51:03 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_comp(s[i], '%'))
		{
			checktype(s[i + 1], ...);
			if (!checktype(s[i + 1], ...))
			{
				i += 1;
				count += checktype(s[i + 1], ...);
			}
		}
		ft_putchar_fd(s[i++], 1);
		count++;
	}
	return (count);
}
#include <stdio.h>

int	main(void)
{
	printf("oui\n");
	ft_printf("o");
}
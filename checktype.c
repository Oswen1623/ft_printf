/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:16:23 by lucinguy          #+#    #+#             */
/*   Updated: 2025/11/25 14:35:31 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checktype(char c, ...)
{
	if (c == 'c')
	{
		ft_putchar();
		return (1);
	}
	else if (c == 's')
		ft_putstr();
	else if (c == 'p')
		//
		else if (c == 'd')
			//
			else if (c == 'i') else if (c == 'u') else if (c == 'x') else if (c == 'X') else if (c == '%')
		{
			ft_putchar("%");
			return (1);
		}
	else
		return (0);
}

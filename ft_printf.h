/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucinguy <lucinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 10:50:16 by lucinguy          #+#    #+#             */
/*   Updated: 2025/11/26 16:41:43 by lucinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

// Printf

int		ft_printf(const char *format, ...);

// Checktype

int		checktype(char c, va_list args, int fd);

// Utils

size_t	ft_putchar_fd_pf(char c, int fd);
size_t	ft_putstr_fd_pf(char const *s, int fd);

// Conv

size_t	ft_putnbr_base_fd(long n, char *base, int fd);

#endif
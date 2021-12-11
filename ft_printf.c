/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:09:11 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/11 15:38:38 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *args, ...)
{
	va_list	ap; // argument parameter

	va_start(ap, args);
	int	i;

	while(*args)
	{
		if(*args == '%')
		{
			args++;
			if(*args == 'c')
				i += ft_putchar(va_arg(ap, int));
			else if (*args == 's')
				i += ft_putstr(va_arg(ap, char *));
			else if(*args == 'd' || *args == 'i')
				i += ft_putnbr(va_arg(ap, int));
		}
	}
	va_end(ap);
	return (i);
}
int	main()
{
	ft_printf("%d", 525);
}

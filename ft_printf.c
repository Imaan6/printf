/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:09:11 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/12 14:16:57 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *args, ...)
{
	va_list	ap; // argument parameter

	va_start(ap, args);
	int	i;

	i = 0;
	while(*args)
	{
		if(*args == '%')
		{
			args++;
			if(*args == 'c')
				i += ft_putchar(va_arg(ap, int));
			else if (*args == 's')
				i += ft_putstr(va_arg(ap, char *));
			else if (*args == 'p')
				i += ft_putaddress(va_arg(ap, unsigned long));
			else if (*args == 'd' || *args == 'i')
				i += ft_putnbr(va_arg(ap, int));
			else if (*args == 'u')
				i += ft_putposnbr(va_arg(ap, unsigned int));
			else if (*args == 'x')
				i += ft_puthexalow(va_arg(ap, unsigned int));
			else if (*args == 'X')
				i += ft_puthexaup(va_arg(ap, unsigned int));
			else if (*args == '%')
				i += ft_putchar('%');
		}
		else
			i += ft_putchar(*args);
		args++;
	}
	va_end(ap);
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int	i = 5;
//	printf("%lu\n", &i);
	ft_printf("My printf can print this int %d: and this address : %p", i, &i);
//	ft_printf("iip \n fg");
}*/

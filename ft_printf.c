/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:01:51 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/01 12:12:05 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	var;
	int		i;
    
	i = 0;
    va_start (var, str);
	while(*str)
	{
		if(*str == "%")
		{
			str++;
			if (*str == 'c')
				i += ft_putchar(va_arg(var, int));
			else if (*str == 's')
				i += ft_putstr(va_arg(var, char *));
			else if (*str == 'd' || *str == 'i')
				i += ft_putnbr(va_arg(var, char *));
		}
		else
			i += ft_putchar(*str);
		str++;
	}
}

/*int main()
{
	int s = printf("hello");
	printf("%d", s);
}*/

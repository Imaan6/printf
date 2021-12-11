/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:21:27 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/11 18:29:56 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	len(unsigned long nb)
{
	int	i;

	i = 0;
	while(nb > 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

void	ft_puthexalow(unsigned long nb)
{
	char	c;

	if (nb < 16)
	{
		if (nb < 10)
			c = nb + '0';
		else
			c = nb + ('a' - 10);
		write(1, &c, 1);
	}
	else
	{
		ft_puthexalow(nb / 16);
		ft_puthexalow(nb % 16);
	}
}

int	ft_putaddress(unsigned long	nb)
{
	write (1 , "0x", 2);
	ft_puthexalow(nb);
	return (len(nb) + 2);
}
/*
int	main()
{
	int	i;
	int	c;
	unsigned long a = (unsigned long)&i;
	c = printf("%p", &i);
	printf("\n");
	printf("%d", c);
	printf("\n");
	c = ft_putaddress(a);
	printf("\n");
	printf("%d", c);
	printf("\n");
}*/

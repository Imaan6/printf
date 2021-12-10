/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:11:36 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/10 11:10:47 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(unsigned int nb)
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

int	ft_puthexalow(unsigned int nb)
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
	return (len(nb));
}
/*
int	main()
{
	int	i;
	i = ft_puthexalow(55555);
	printf("%i", i);
	i = printf("%x", 55555);
	printf("%i", i);
}*/

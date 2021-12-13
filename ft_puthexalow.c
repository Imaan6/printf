/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:11:36 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/13 11:01:27 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_l(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (i = 1);
	while (nb > 0)
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
	return (len_l(nb));
}
/*
int	main()
{
	int	i;
	i = ft_puthexalow(0);
	printf("%i", i);
	i = printf("%x", 0);
	printf("%i", i);
}*/

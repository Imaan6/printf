/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:12:48 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/12 11:40:52 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_u(unsigned int nb)
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

int	ft_puthexaup(unsigned int nb)
{
	char	c;

	if (nb < 16)
	{
		if (nb < 10)
			c = nb + '0';
		else
			c = nb + ('A' - 10);
		write(1, &c, 1);
	}
	else
	{
		ft_puthexaup(nb / 16);
		ft_puthexaup(nb % 16);
	}
	return (len_u(nb));
}
/*
int	main()
{
	int	i;
	i = ft_puthexaup(55555);
	printf(" %i ", i);
	i = printf(" %X ", 55555);
	printf(" %i ", i);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:56:04 by iel-moha          #+#    #+#             */
/*   Updated: 2021/12/01 11:30:55 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int	i;

	i = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		n = nb * -1;
		i++;
	}
	else
	{
		n = nb;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		i += ft_putchar(n % 10 + 48);
	}
	else if (n < 10)
	{
		i += ft_putchar(n + 48);
	}
	return (i);
}

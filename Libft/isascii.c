/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:03:59 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/14 21:10:52 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("============================\n");
	printf("program %d\n", isascii(145));
	printf("mine %d\n", ft_isascii(145));
	printf("============================\n");
	printf("============================\n");
	printf("program %d\n", isascii(120));
	printf("mine %d\n", ft_isascii(120));
	printf("============================\n");
	printf("============================\n");
	printf("program %d\n", isascii('A'));
	printf("mine %d\n", ft_isascii('A'));
	printf("============================\n");
	printf("============================\n");
	printf("program %d\n", isascii(-300));
	printf("mine %d\n", ft_isascii(-300));
	printf("============================\n");
	printf("============================\n");
	printf("program %d\n", isascii(6));
	printf("mine %d\n", ft_isascii(6));
	printf("============================\n");
}*/

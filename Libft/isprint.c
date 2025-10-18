/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:30:21 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/17 21:10:36 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("program :%d %d\n", *argv[1], ft_isprint(*argv[1]));
	}
}*/

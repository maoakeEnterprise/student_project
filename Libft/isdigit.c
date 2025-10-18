/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:19:06 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/14 20:33:02 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(int argc, char *argv[])
{
	if(argc > 1)
	{
		printf("program : %d\n", isdigit(*argv[1]));
		printf("mine : %d\n", ft_isdigit(*argv[1]));
	}
}*/

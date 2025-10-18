/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:11:03 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/17 21:23:06 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%ld\n", ft_strlen(argv[1]));
	}
	return (1);
}*/

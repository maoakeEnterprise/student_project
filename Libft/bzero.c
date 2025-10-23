/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:29:34 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/21 21:15:54 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	c;

	c = '\0';
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
}

/*#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char	s[10] = "test";
	printf("%s\n", s);
	ft_bzero(s, 4);
	printf("%s\n", s);
}*/

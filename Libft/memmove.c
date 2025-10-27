/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 06:16:43 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/27 11:08:13 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;
	size_t			i;

	i = 0;
	d_tmp = (unsigned char *)dest;
	s_tmp = (unsigned char *)src;
	if (d_tmp > s_tmp)
	{
		while (i < n)
		{
			d_tmp[i] = s_tmp[i];
			i++;
		}
	}
	else if (d_tmp < s_tmp)
	{
		i = n;
		while (i > 0)
		{
			d_tmp[i - 1] = s_tmp[i - 1];
			i--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[4] = "ssd";
	char	src[10] = "test";

	printf("%s\n", dest);
	memmove(dest, src, 4);
	printf("%s\n", dest);
}*/

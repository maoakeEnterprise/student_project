/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mteriier </var/spool/mail/mteriier>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 06:37:25 by mteriier          #+#    #+#             */
/*   Updated: 2025/10/27 11:41:18 by mteriier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[10] = "te";
	char	src[10] = "testdd";
	size_t	size = 0;

	printf("%s :: %ld\n", dst, size);
	size = ft_strlcpy(dst, src, 6);
	printf("%s :: %ld\n", dst, size);
}*/

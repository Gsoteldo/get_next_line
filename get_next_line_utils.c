/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:20:46 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/11/29 20:17:50 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = ft_calloc((size + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[size] = 0;
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	n;
	int	cont;

	n = 0;
	cont = 0;
	while (str[n] != '\0')
	{
		cont++;
		n++;
	}
	return (cont);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (str[i] == (char)c)
	{
		return ((char *)str + i);
	}
	return (0);
}
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	contador;

	i = 0;
	contador = 0;
	if (dstsize == 0)
	{
		contador = ft_strlen(src);
		return (contador);
	}
	while ((src[i] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	contador = 0;
	while (src[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}*/

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

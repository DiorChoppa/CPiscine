/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 14:45:27 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/04 14:45:29 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *haystack;
	char *needle;

	if (*to_find == '\0')
		return (str);
	haystack = str;
	needle = to_find;
	while (true)
	{
		if (*needle == '\0')
			return ((char *)(haystack - (needle - to_find)));
		if (*haystack == *needle)
			needle++;
		else
			needle = to_find;
		if (*haystack == '\0')
			break ;
		haystack++;
	}
	return (NULL);
}

int		main(void)
{
	char *haystack;
	char *needle;
	char *result_c;
	char *result_ft;

	haystack = "Foo Bar Baz";
	needle = "Bar";
	result_c = strstr(haystack, needle);
	result_ft = ft_strstr(haystack, needle);
	printf("%p / %p\n", result_c, result_ft);
	printf("c  : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:38:01 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:38:02 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len_s < start + len)
		len = len_s - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*#include <stdio.h>

int main() {
    char *input_string = "This is a test string.";
    unsigned int start_index = 5;
    size_t length = 7;

    char *substring = ft_substr(input_string, start_index, length);

    if (substring) {
        printf("Original string: %s\n", input_string);
        printf("Substring: %s\n", substring);
        free(substring); // Don't forget to free the allocated memory
    } else {
        printf("Subtring allocation failed.\n");
    }

    return 0;
}*/

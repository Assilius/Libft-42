/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:56 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:57 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, ((j - i) + 1));
	return (str);
}
/*# include <stdio.h>

int main() {
    char *original_string = "   Hello, world!   ";
    char *trim_set = " ";

    char *trimmed_string = ft_strtrim(original_string, trim_set);

    if (trimmed_string) {
        printf("Original string: \"%s\"\n", original_string);
        printf("Trimmed string: \"%s\"\n", trimmed_string);
        free(trimmed_string);  // Don't forget to free the allocated memory
    } else {
        printf("String trimming failed.\n");
    }

    return 0;
}*/
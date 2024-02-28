/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:02 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:03 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	total_len;

	total_len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

int main() {
    char *string1 = "Hello, ";
    char *string2 = "world!";
    
    char *concatenated = ft_strjoin(string1, string2);
    
    if (concatenated) {
        printf("String 1: %s\n", string1);
        printf("String 2: %s\n", string2);
        printf("Concatenated: %s\n", concatenated);
        free(concatenated);  // Don't forget to free the allocated memory
    } else {
        printf("String concatenation failed.\n");
    }

    return 0;
}*/
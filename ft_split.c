/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:27 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:28 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(char const *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = -1;
	if (!s)
		return (NULL);
	arr = (char **)malloc((sizeof(char *) * (ft_wordcount(s, c) + 1)));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			arr[++j] = ft_getword(s, c, i++);
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	arr[++j] = NULL;
	return (arr);
}
/*#include <stdio.h>

int main() {
    char *input_string = "This,is,a,test,string";
    char delimiter = ',';

    char **result = ft_split(input_string, delimiter);

    if (result) {
        printf("Input string: \"%s\"\n", input_string);
        printf("Split using delimiter '%c':\n", delimiter);

        for (int i = 0; result[i] != NULL; i++) {
            printf("Token %d: \"%s\"\n", i, result[i]);
            free(result[i]);  // Don't forget to free 
            the allocated memory for each token
        }
        free(result);  // Don't forget to free the array of tokens

    } else {
        printf("String splitting failed.\n");
    }

    return 0;
}*/

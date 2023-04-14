/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:46:05 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/14 18:18:58 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	index;

	index = 0;
	if (!(s))
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		newstr = malloc(1);
		*newstr = '\0';
		return (newstr);
	}
	if (ft_strlen(s) - start >= len)
		newstr = (char *)malloc(sizeof(char) * (len + 1));
	else
		newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!(newstr))
		return (NULL);	
	while (s[start] && index < len)
		newstr[index++] = s[start++];			
	newstr[index] = '\0';
	return (newstr);
}

/*int	main(void)
{
	char const	*teste;

	teste = "I am a forty two student";
	printf("%s\n", ft_substr(teste, 7, 0));
	//printf("%s\n", ft_substr_teste(teste, 7, 0));
	
}
*/
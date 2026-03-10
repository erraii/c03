/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:19:22 by ecakiray          #+#    #+#             */
/*   Updated: 2026/03/06 20:27:53 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		str_len;
	int		to_find_len;

	str_len = 0;
	if (*(to_find) == '\0')
		return (str);
	while (*(str + str_len))
	{
		to_find_len = 0;
		while ((*(str + str_len + to_find_len) == *(to_find + to_find_len))
			&& *(to_find + to_find_len))
			to_find_len++;
		if (*(to_find + to_find_len) == '\0')
			return (str + str_len);
		str_len++;
	}
	return (NULL);
}

// int	main(void)
// {
//  	char	myString1[] = "";
//  	char	myString2[] = "hello";

//  	printf("location: %p\n", ft_strstr(myString1, myString2));
//  	return (0);
// }
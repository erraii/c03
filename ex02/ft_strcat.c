/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 22:22:36 by ecakiray          #+#    #+#             */
/*   Updated: 2026/03/06 20:26:15 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	str_len_dest;
	int	str_len_src;

	str_len_dest = 0;
	str_len_src = 0;
	while (*(dest + str_len_dest))
		str_len_dest++;
	while (*(src + str_len_src))
	{
		*(dest + str_len_dest + str_len_src) = *(src + str_len_src);
		str_len_src++;
	}
	*(dest + str_len_dest + str_len_src) = '\0';
	return (dest);
}

// int	main(void)
// {
//  	char	myString1[] = "Hello";
//  	char	myString2[] = " World!";

//  	printf("result: %s\n", ft_strcat(myString1, myString2));
//  	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 22:48:30 by ecakiray          #+#    #+#             */
/*   Updated: 2026/03/06 20:27:11 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	str_len_dest;
	unsigned int	str_len_src;

	str_len_dest = 0;
	str_len_src = 0;
	while (*(dest + str_len_dest))
		str_len_dest++;
	while (*(src + str_len_src) && str_len_src < nb)
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
//  	char	myString2[] = " World!:)";

//  	printf("result: %s\n", ft_strncat(myString1, myString2, 7));
//  	return (0);
// }
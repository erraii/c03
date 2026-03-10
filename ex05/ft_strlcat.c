/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:18:25 by ecakiray          #+#    #+#             */
/*   Updated: 2026/03/06 20:50:02 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	ret_size;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size] && (dest_size < size))
		dest_size += 1;
	while (src[src_size])
		src_size += 1;
	ret_size = dest_size + src_size;
	if (dest_size == size)
		return (size + src_size);
	src_size = 0;
	while (src[src_size] && ((dest_size + src_size) < (size - 1)))
	{
		dest[dest_size + src_size] = src[src_size];
		src_size += 1;
	}
	dest[dest_size + src_size] = '\0';
	return (ret_size);
}

// int	main(void)
// {
//  	char	myString1[] = "1337 42";
//  	char	myString2[] = "Born to code";

//  	printf("size: %d\n", ft_strlcat(myString1, myString2, 20));
// 	printf("dest: %s\n", myString1);
//  	return (0);
// }
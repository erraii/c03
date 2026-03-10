/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 21:42:46 by ecakiray          #+#    #+#             */
/*   Updated: 2026/03/06 20:26:33 by ecakiray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		str_len;

	str_len = 0;
	while (*(s1 + str_len) && *(s2 + str_len)
		&& ((*(s1 + str_len) - *(s2 + str_len)) == 0))
		str_len++;
	if (*(s1 + str_len) == '\0' && *(s2 + str_len) == '\0')
		return (0);
	else
		return (*(s1 + str_len) - *(s2 + str_len));
}
// int	main(void)
// {
// 	char	myString1[] = "Hello";
// 	char	myString2[] = "Hello";
// 	char	myString3[] = "Hi";
// 	char	myString4[] = "Merhaba";

// 	printf("result: %d\n", ft_strcmp(myString1, myString2));
// 	printf("result: %d\n", ft_strcmp(myString1, myString3));
// 	printf("result: %d\n", ft_strcmp(myString1, myString4));

// 	return (0);
// }
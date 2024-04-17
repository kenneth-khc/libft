/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testft_strcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:14:19 by kecheong          #+#    #+#             */
/*   Updated: 2024/04/17 20:28:29 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"

int	ft_strcmp(const char *p1, const char *p2);

void	setUp(void)
{
	;
}

void	tearDown(void)
{
	;
}

void	test_equal(void)
{
	const char	s1[] = "Hello";
	const char	s2[] = "Hello";
	
	TEST_ASSERT(ft_strcmp(s1, s2) == 0);
}

void	test_unequal(void)
{
	const char	s1[] = "Bello";
	const char	s2[] = "Hello";

	TEST_ASSERT(ft_strcmp(s1, s2) != 0);
	TEST_ASSERT(ft_strcmp(s1, s2) == 'B' - 'H');
}

void	test_empty(void)
{
	const char	s1[] = "";
	const char	s2[] = "";

	TEST_ASSERT(ft_strcmp(s1, s2) == 0);
}

void	test_unequal_diff_length(void)
{
	const char	s1[] = "Hello";
	const char	s2[] = "Hello World";

	TEST_ASSERT(ft_strcmp(s1, s2) != 0);
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_equal);
	RUN_TEST(test_unequal);
	RUN_TEST(test_empty);
	RUN_TEST(test_unequal_diff_length);
	UNITY_END();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:49:46 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/17 10:14:52 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Standard I/O functions
#include "ft_printf.h"  // Your custom ft_printf function
#include <limits.h>

int main() {
    int num = -42;
    unsigned int u_num = 4294967295; // Maximum unsigned 32-bit int
    char *str = "Hello, 42!";
    char ch = 'A';
    void *ptr = &num;

    // Test printing strings
    printf("Standard printf: ");
    printf("%s\n", str);
    ft_printf("Custom ft_printf: %s\n\n", str);

    // Test printing characters
    printf("Standard printf: ");
    printf("%c\n", ch);
    ft_printf("Custom ft_printf: %c\n\n", ch);

    // Test printing integers
    printf("Standard printf: ");
    printf("%d\n", num);
    ft_printf("Custom ft_printf: %d\n\n", num);

    // Test printing unsigned integers
    printf("Standard printf: ");
    printf("%u\n", u_num);
    ft_printf("Custom ft_printf: %u\n\n", u_num);

    // Test printing hexadecimal (lowercase and uppercase)
    printf("Standard printf: ");
    printf("%x, %X\n", num, num);
    ft_printf("Custom ft_printf: %x, %X\n\n", num, num);

    // Test printing pointers
    printf("Standard printf: ");
    printf("%p\n", ptr);
    ft_printf("Custom ft_printf: %p\n\n", ptr);

    // Test with format string that includes text and variables
    ft_printf("Mixing chars %c, strings %s, integers %d,\n\
hex %x, pointer %p, and double percent %%\n\n", ch, str, num, u_num, ptr);

    // Null pointer test for string
//    printf("Standard printf null string: ");
//    printf("%s\n", (char*)NULL);
    ft_printf("Custom ft_printf null string: %s\n\n", (char*)NULL);

    // Test the return value from ft_printf to check character count
    int count = ft_printf("This should print 38 characters long.\n");
    printf("ft_printf returned: %d\n\n", count);

	printf("Printf %%p %%p ");
	printf(" %p %p \n", (void *)0, (void *)0);
	ft_printf("ft_printf %p %p \n\n", (void *)0, (void *)0);

	printf("Test (\" %%x \", 0):");
	printf(" %x \n", 0);
	ft_printf("ft_printf: %x \n\n", 0);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat"
	printf("LONG_MAX: %x \n", LONG_MAX);
	ft_printf("ft_printf: %x \n\n", LONG_MAX);


	printf("LONG_MIN: %x \n", LONG_MIN);
	ft_printf("ft_printf: %x \n\n", LONG_MIN);
#pragma GCC diagnostic pop
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:02 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 11:56:25 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A main() function for testing the functions in libft */

#include <unistd.h>  // For write() and file descriptor macros
#include <fcntl.h>   // For file control options
#include <stdio.h>
#include "../libft.h"

void callback(unsigned int index, char *c); 

int	main(void)
{
	int	result;

	fflush(stdout);
	fflush(stderr);

	printf("\n----------------\n");
	printf("Testing ft_isalpha:\n");
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isdigit:\n");
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isalnum:\n");
	printf("Is \'Q\' alnum? ");
	printf("%d\n", ft_isalnum('Q'));
	printf("Is \'2\' alnum? ");
	printf("%d\n", ft_isalnum('2'));
	printf("Is \'\\\' alnum? ");
	printf("%d\n", ft_isalnum('\\'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isascii:\n");
	printf("Is \'Q\' ascii? ");
	printf("%d\n", ft_isascii('Q'));
	printf("Is \'2\' ascii? ");
	printf("%d\n", ft_isascii('2'));
	printf("Is \'\\\' ascii? ");
	printf("%d\n", ft_isascii('\\'));
	printf("Is 255 ascii? ");
	printf("%d\n", ft_isascii(255));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isprint:\n");
	printf("Is \'Q\' print? ");
	printf("%d\n", ft_isprint('Q'));
	printf("Is \'2\' print? ");
	printf("%d\n", ft_isprint('2'));
	printf("Is \'\\\' print? ");
	printf("%d\n", ft_isprint('\\'));
	printf("Is 255 print? ");
	printf("%d\n", ft_isprint(255));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_toupper:\n");
	printf("a toupper() is: ");
	printf("%c\n", ft_toupper('a'));
	printf("2 toupper() is: ");
	printf("%c\n", ft_toupper('2'));
	printf("Z toupper() is: ");
	printf("%c\n", ft_toupper('Z'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_tolower:\n");
	printf("a tolower() is: ");
	printf("%c\n", ft_tolower('a'));
	printf("2 tolower() is: ");
	printf("%c\n", ft_tolower('2'));
	printf("Z tolower() is: ");
	printf("%c\n", ft_tolower('Z'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strchr:\n");
	printf("X in \'12X4X6\' is: ");
	printf("%s\n", ft_strchr("12X4X6", 'X'));
	printf("NULL in \'12X4X6\' is: ");
	printf("%s\n", ft_strchr("12X4X6", '\0'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strrchr:\n");
	printf("X in \'12X4X6\' is: ");
	printf("%s\n", ft_strrchr("12X4X6", 'X'));
	printf("NULL in \'12X4X6\' is: ");
	printf("%s\n", ft_strrchr("12X4X6", '\0'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strlen:\n");
	printf("\'12X4X6\' length is: ");
	printf("%zu\n", ft_strlen("12X4X6"));
	printf("\'12X\' length is: ");
	printf("%zu\n", ft_strlen("12X"));
	printf("----------------\n\n");

	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Helln";
	char	str4[] = "World";
	printf("----------------\n");
	printf("Testing ft_strncmp:\n");
	printf("%s+%s, size %u: %d\n", str1, str2, 3, ft_strncmp(str1, str2, 3));
	printf("%s+%s, size %u: %d\n", str1, str3, 5, ft_strncmp(str1, str3, 5));
	printf("%s+%s, size %u: %d\n", str1, str4, 3, ft_strncmp(str1, str4, 3));
	printf("----------------\n\n");

    char *test_str1 = " ---+--+1234ab567";
    char *test_str2 = "   +42";
    char *test_str3 = "-0";
    char *test_str4 = "2147483647";  // Max int value
    char *test_str5 = "";
    char *test_str6 = "Not a number 123";
    char *test_str7 = "12345";
	printf("----------------\n");
	printf("Testing ft_atoi:\n");
    printf("ft_atoi(\"%s\") = %d\n", test_str1, ft_atoi(test_str1));
    printf("ft_atoi(\"%s\") = %d\n", test_str2, ft_atoi(test_str2));
    printf("ft_atoi(\"%s\") = %d\n", test_str3, ft_atoi(test_str3));
    printf("ft_atoi(\"%s\") = %d\n", test_str4, ft_atoi(test_str4));
    printf("ft_atoi(\"%s\") = %d\n", test_str5, ft_atoi(test_str5));
    printf("ft_atoi(\"%s\") = %d\n", test_str6, ft_atoi(test_str6));
    printf("ft_atoi(\"%s\") = %d\n", test_str7, ft_atoi(test_str7));
	printf("----------------\n\n");

	size_t	size;
	char	src[] = "source";
	char	dest[12] = "dest";
	size = ft_strlcat(dest, src, 9);
	printf("----------------\n");
	printf("Testing ft_strlcat:\n");
	printf("\"source\" appended to \"dest\"");
	printf(" limited by size 9 is:\n");
	printf("%s\n", dest);
	printf("Return is: %zu\n", size);
	printf("----------------\n\n");

	char	str5[] = "Hello, World";
	size_t	size2 = 5;
	char	str6[size];
	printf("----------------\n");
	printf("Testing ft_strlcpy:\n");
	printf("str1 is \"%s\"\n", str5);
	printf("size is %zu\n", size2);
	printf("ft_strlcpy returns %zu\n", ft_strlcpy(str6, str5, size2));
	printf("str2 is \"%s\"\n", str6);
	printf("----------------\n\n");

    char str11[] = "Hello, world!";
    char to_find1[] = "world";
    char to_find2[] = "planet";
    char to_find3[] = "";
	printf("----------------\n");
	printf("Testing ft_strnstr:\n");
	printf("str is '%s'\n", str11);
    // Test case 1: Substring found
    char *result1 = ft_strnstr(str11, to_find1, 14);
    if (result1)
        printf("Found substring: '%s'\n", result1);
    else
        printf("Substring '%s' not found.\n", to_find1);
    // Test case 2: Substring not found
    char *result2 = ft_strnstr(str11, to_find2, 14);
    if (result2)
        printf("Found substring: '%s'\n", result2);
    else
        printf("Substring '%s' not found.\n", to_find2);
    // Test case 3: Empty substring
    char *result3 = ft_strnstr(str11, to_find3, 14);
    if (result3)
        printf("Found empty substring at: '%s'\n", result3);
    else
        printf("Empty substring not found.\n");
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_putchar_fd:\n");
	// Test 1: Writing to standard output
	fflush(stdout);
    ft_putchar_fd('H', STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);
    // Test 2: Writing to standard error
	ft_putchar_fd('e', STDERR_FILENO);
    ft_putchar_fd('\n', STDERR_FILENO);
    // Test 3: Writing to a file
    int file_fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file_fd == -1)
    {
        // Handle error in opening file
        ft_putchar_fd('F', STDERR_FILENO);
    	ft_putchar_fd('\n', STDERR_FILENO);
        return 1;
    }
    ft_putchar_fd('T', file_fd);
    ft_putchar_fd('\n', file_fd);
    close(file_fd);  // Always remember to close the file descriptor
	// Read from the file
    file_fd = open("test_output.txt", O_RDONLY);
	char read_char1;
	while (read(file_fd, &read_char1, 1) == 1)
			printf("%c", read_char1);
    close(file_fd);  // Always remember to close the file descriptor
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_putstr_fd:\n");
    // Test 1: Writing to standard output
    ft_putstr_fd("Hello, World!\n", STDOUT_FILENO);
    // Test 2: Writing to standard error
    fflush(stderr);
	ft_putstr_fd("This is an error message.\n", STDERR_FILENO);
	fflush(stderr);
    // Test 3: Writing to a file
    file_fd = open("test_output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file_fd == -1)
    {
        // Handle error in opening file
        ft_putstr_fd("Failed to open file.\n", STDERR_FILENO);
		fflush(stderr);
        return 1;
    }
    ft_putstr_fd("This is a message in a file.\n", file_fd);
    close(file_fd);  // Always remember to close the file descriptor
	file_fd = open("test_output2.txt", O_RDONLY);
	char read_char2;
	while (read(file_fd, &read_char2, 1) == 1)
		printf("%c", read_char2);
    close(file_fd);  // Always remember to close the file descriptor
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_putendl_fd:\n");
    // Test 1: Writing to standard output
    ft_putendl_fd("Hello, World!", STDOUT_FILENO);
    // Test 2: Writing to standard error
    ft_putendl_fd("This is an error message.", STDERR_FILENO);
    // Test 3: Writing to a file
    file_fd = open("test_output3.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file_fd == -1)
    {
        // Handle error in opening file
        ft_putendl_fd("Failed to open file.", STDERR_FILENO);
		fflush(stderr);
        return 1;
    }
    ft_putendl_fd("This is a message in a file.", file_fd);
    close(file_fd);  // Always remember to close the file descriptor
	file_fd = open("test_output3.txt", O_RDONLY);
	char read_char3;
	while (read(file_fd, &read_char3, 1) == 1)
		printf("%c", read_char3);
    close(file_fd);  // Always remember to close the file descriptor
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_putnbr_fd:\n");
    // Test 1: Writing to standard output
    fflush(stdout);
	ft_putnbr_fd(12345, STDOUT_FILENO);
	printf("\n");
    // Test 2: Writing to standard error
    ft_putnbr_fd(54321, STDERR_FILENO);
	printf("\n");
    // Test 3: Writing to a file
    file_fd = open("test_output4.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file_fd == -1)
    {
        // Handle error in opening file
        ft_putnbr_fd(911, STDERR_FILENO);
        return 1;
    }
    ft_putnbr_fd(1337, file_fd);
    close(file_fd);  // Always remember to close the file descriptor
	file_fd = open("test_output4.txt", O_RDONLY);
	char read_char4;
	while (read(file_fd, &read_char4, 1) == 1)
		printf("%c", read_char4);
    close(file_fd);  // Always remember to close the file descriptor
	printf("\n");
	printf("----------------\n\n");

	char striteri[] = "hello world";
	printf("----------------\n");
	printf("Testing ft_striteri:\n");
	printf("Original string is %s\n", striteri);
	ft_striteri(striteri, &callback);
	printf("Modified string is %s\n", striteri);
	printf("----------------\n\n");

	return (0);
}

void callback(unsigned int index, char *c) 
{
    // Example: convert lowercase characters to uppercase
    if (*c >= 'a' && *c <= 'z') 
        *c = *c - ('a' - 'A');
}

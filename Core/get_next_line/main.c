/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:56:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/11 18:56:32 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main() {
    int fd;
    char *line;

    // Open the file
    fd = open("/home/lfrench/francinette/tests/get_next_line/fsoares/variable_nls.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    // Read lines until end of file
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);
        free(line);
    }

    // Close the file
    close(fd);

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:06:07 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/23 16:21:27 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strlcpy (man strcpy). */

/* This function is similar to strncpy(), but it copies at most size-1 bytes 
   to dest, always adds a terminating null byte, and does not pad the 
   destination with (further) null bytes. This function fixes some of the 
   problems of strcpy() and strncpy(), but the caller must still handle the 
   possibility of data loss if size is too small. The return value of the 
   function is the length of src, which allows truncation to be easily 
   detected: if the return value is greater than or equal to size, truncation 
   occurred. If loss of data matters, the caller must either check the 
   arguments before the call, or test the function return value. */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (src_length);
}

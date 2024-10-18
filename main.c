#include <stdio.h>
#include "includes/libft.h"

int	main(void)
{
	printf("'%c' isalpha: %s\n", 'a', (ft_isalpha('a') ? "true" : "false"));
	printf("'%c' isalpha: %s\n", '2', (ft_isalpha('2') ? "true" : "false"));
	printf("'%c' isdigit: %s\n", 'a', (ft_isdigit('a') ? "true" : "false"));
	printf("'%c' isdigit: %s\n", '2', (ft_isdigit('2') ? "true" : "false"));
	printf("'%c' isalnum: %s\n", '%', (ft_isalnum('%') ? "true" : "false"));
	printf("'%c' isalnum: %s\n", 'a', (ft_isalnum('a') ? "true" : "false"));
	printf("'%c' isascii: %s\n", 'a', (ft_isascii('a') ? "true" : "false"));
	printf("(int)'%d' isascii: %s\n", 25929, (ft_isascii(25929) ? "true" : "false"));
	printf("'%d' isprint: %s\n", 'b', (ft_isprint('b') ? "true" : "false"));
	printf("'%d' isprint: %s\n", '\n', (ft_isprint('\n') ? "true" : "false"));
	printf("'%s' strlen: %d\n", "Hello World!", ft_strlen("Hello World!"));
	printf("'%c' toupper: %c\n", 'a', (ft_toupper('a')));
	printf("'%c' toupper: %c\n", 'A', (ft_toupper('A')));



}

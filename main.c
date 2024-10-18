#include <stdio.h>
#include "includes/libft.h"

int	main(void)
{
	printf("###Tests:####\n");
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
	printf("'%s' strlen: %d\n", "Hello, World!", ft_strlen("Hello, World!"));
	printf("'%c' toupper: %c\n", 'a', (ft_toupper('a')));
	printf("'%c' toupper: %c\n", 'A', (ft_toupper('A')));
	printf("'%c' tolower: %c\n", 'a', (ft_tolower('a')));
	printf("'%c' tolower: %c\n", 'A', (ft_tolower('A')));
	printf("'Hello world' ft_strchr searching for first: 'o': '%s'\n", ft_strchr("Hello world", 'o'));
	printf("'Hello world' ft_strchr searching for first: 'a': '%s'\n", ft_strchr("Hello world", 'a'));
	printf("'Hello world' ft_strrchr searching for last: 'o': '%s'\n", ft_strrchr("Hello world", 'o'));
	printf("'Hello world' ft_strrchr searching for last: 'a': '%s'\n", ft_strrchr("Hello world", 'a'));
	printf("'Hello World' ft_strncmp comparting 5 digits with: 'Hella' = %d\n", ft_strncmp("Hello World", "Hella", 5));
	char buffer_memset[10] = {0};
	ft_memset(buffer_memset, 'a', sizeof(buffer_memset));
	printf("filling with ft_memset, buffer with 'a', buffer: %s'\n",  buffer_memset);
}

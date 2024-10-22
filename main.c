#include <stdio.h>
#include <string.h>
#include "includes/libft.h"
#include <stdlib.h>

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
	printf("'Hello World' ft_strncmp comparting 5 digits with 'Hella' : %d\n", ft_strncmp("Hello World", "Hella", 5));
	char buffer_memset[10] = {0};
	ft_memset(buffer_memset, 'a', sizeof(buffer_memset)); printf("filling with ft_memset, buffer with 'a', buffer: '%s'\n",  buffer_memset);
	ft_bzero(buffer_memset, sizeof(buffer_memset)); printf("wiping buffer_memset with ft_bzero: '%s'\n",  buffer_memset);
	printf("Buffer after ft_bzero: "); for (int i = 0; i < sizeof(buffer_memset); i++) {printf("%d ", buffer_memset[i]);}printf("\n");
	printf("'Hello world' ft_memchr: searching for first: 'o' in the first, 4 digits: '%s'\n", (char *)ft_memchr("Hello world", 'o', 4));
	printf("'Hello world' ft_memchr: searching for first: 'o' in the first, 5 digits: '%s'\n", (char *)ft_memchr("Hello world", 'o', 5));
	printf("'Hello world' ft_memchr: searching for first: 'a' in sizeof(\"Hello world)\" '%s'\n", (char *)ft_memchr("Hello world", 'a', sizeof("Hello world")));
	printf("'Hello world' ft_memcpy: copying the first 6 bytes:  '%s'\n", (char *)ft_memcpy(buffer_memset, "Hello world", 6));
	printf("the modern pc-system read bytes backwards, 512 in binary is '1000000000',pc reads the last 8 digits first as one byte then the rest \n");
	 int int_src = 512; int int_dest = 0;
	printf("copying with ft_memcpy: 1 bytes of an int with value 512 (00000000 00000010 00000000 00000000): "); ft_memcpy(&int_dest, &int_src, 1); printf("int dest: %d\n", int_dest);
	printf("copying with ft_memcpy: 2 bytes of an int with value 512 (00000000 00000010 00000000 00000000): "); ft_memcpy(&int_dest, &int_src, 2); printf("int dest: %d\n", int_dest);
	 int_src = 255;  int_dest = 0;
	printf("copying with ft_memcpy: 1 bytes of an int with value 255 (11111111 00000000 00000000 00000000): "); ft_memcpy(&int_dest, &int_src, 1); printf("int dest: %d\n", int_dest);
	 int_src = 511;  int_dest = 0;
	printf("copying with ft_memcpy: 1 bytes of an int with value 511 (11111111 00000001 00000000 00000000): "); ft_memcpy(&int_dest, &int_src, 1); printf("int dest: %d\n", int_dest);
	printf("comparing 1 byte ft_memcmp: %d and %d : %d\n", int_src, int_dest, ft_memcmp(&int_src, &int_dest, 1));
	printf("comparing 2 bytes ft_memcmp: %d and %d : %d\n", int_src, int_dest, ft_memcmp(&int_src, &int_dest, 2));
	printf("comparing 1 byte with memcmp: %d and %d : %d\n", int_src, int_dest, memcmp(&int_src, &int_dest, 1));
	printf("comparing 2 bytes with memcmp: %d and %d : %d\n", int_src, int_dest, memcmp(&int_src, &int_dest, 2));
	char buffer_memmove[20] = "Hello, World!"; ft_memmove(buffer_memmove + 7, buffer_memmove, 5); printf("src = 'Hello, World!' ft_memmove: copying  5 bytes at dest 'src + 7' new src: '%s'\n", buffer_memmove);
	//no tests for strlcpy yet:::
	printf("tests ft_atoi for: 42, -42, 2147483647, -2147483648, (-+1) | results: '%d', '%d', '%d', '%d', '%d' \n", ft_atoi("42"),ft_atoi("-42"), ft_atoi("2147483647"), ft_atoi("-2147483648"), ft_atoi("-+1"));
	printf("'%s' appending ' Hello, 42' at the end: ", buffer_memmove); ft_strlcat(buffer_memmove, " Hello, 42!", 11); printf("'%s'\n", buffer_memmove);
	char *new_str = ft_strdup(buffer_memmove); printf("testing: ft_strdup, original str = '%s', duplicated string = '%s'\n",buffer_memmove, new_str); free(new_str);
	printf("searching for 'ell' with ft_strnstr: in string |'%s'| after = %s\n", buffer_memmove, ft_strnstr(buffer_memmove, "ell", sizeof(buffer_memmove)));
	printf("searching for ' 'with ft_strnstr: in string |'%s'| = %s\n", buffer_memmove, ft_strnstr(buffer_memmove, " ", sizeof(buffer_memmove)));
	printf("searching for 'Ola' with ft_strnstr: in string |'%s'| = %s\n", buffer_memmove, ft_strnstr(buffer_memmove, "Ola", sizeof(buffer_memmove)));
	printf("searching for '' with ft_strnstr: in string |'%s'| = %s\n", buffer_memmove, ft_strnstr(buffer_memmove, "", sizeof(buffer_memmove)));
	printf("Copying with ft_substr: from index 7 in string |'%s'| the substring of size 5: result = |'%s'|\n", buffer_memmove, ft_substr(buffer_memmove, 7, 5));
	printf("Copying with ft_substr: from index 7 in string |'%s'| the substring of size 17: result = |'%s'|\n", buffer_memmove, ft_substr(buffer_memmove, 7, 17));
	*new_str = *ft_strjoin("Hello, ", "World!");	printf("joining with ft_strjoin(\"Hello, \", \"World!\") returns = |'%s'|", new_str);
}

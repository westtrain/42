#include "includes/libft.h"

int		main(void)
{
	char str[] = "almost every programmer should know memset!";
	char strzero[3];

	ft_bzero(strzero, 3);
	printf("%s\n", ft_memset(str, '-', 6));
	printf("%s\n", strzero);
	return (0);
}

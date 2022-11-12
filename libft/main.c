#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main()
{
	char	dest[] = "Salut c'est le sucre";
	char	src[] = "Bonjour";

	printf("%ld", ft_strlcpy(dest, src, 10));
}
 
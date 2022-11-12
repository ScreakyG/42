#include <stdio.h>
#include "libft.h"

int	main()
{
	char	src[] = "Salut test";
	char	dest[50] = "WOuhoo";

	printf("Avant memcpy dest = %s\n", dest);
	ft_memset(dest, src, (ft_strlen(src) +1));
	printf("Apres memcpy dest = %s", dest);
}

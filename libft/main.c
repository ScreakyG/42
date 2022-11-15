#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main()
{
	char	dest[] = "Salut";
	char	src[] = "ça va ?";
	size_t	cat;

	cat = ft_strlcat(dest, src, 30);

	printf("%ld\n", cat);
	printf("%s\n", dest);

}
 
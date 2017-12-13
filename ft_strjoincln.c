#include "libft.h"

char	*ft_strjoincln(char *s1, char *s2)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	if (str == NULL)
		return (NULL);
	return (str);
}

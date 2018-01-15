#include "libft.h"

static int	get_nbwords(char *s)
{
	int		nb;

	nb = 0;
	while (*s)
	{
		while (ft_isspace(*s))
			s++;
		if (*s && !ft_isspace(*s))
			nb++;
		while (*s && !ft_isspace(*s))
			s++;
	}
	return (nb);
}

static int	get_len(char *s)
{
	int		i;

	i = 0;
	while (s[i] && !ft_isspace(s[i]))
		i++;
	return (i);	
}

char		**ft_splitwhitespace(char *s)
{
	char	**ret;
	int		size;
	int		i;

	i = 0;
	size = get_nbwords(s);
	ret = (char **)malloc(sizeof(char *) * size + 1);
	ret[size] = (char *)malloc(sizeof(char));
	ret[size][0] = 0;
	while (*s)
	{
		while (ft_isspace(*s))
			s++;
		if (*s)
			ret[i++] = ft_strndup(s, get_len(s));
		s += get_len(s);
	}
	return (ret);
}

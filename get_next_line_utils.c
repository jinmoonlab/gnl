#include "get_next_line.h"

char	*str_init(char *s)
{
	s = (char *)malloc(sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	return (s);
}

int	gnl_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}
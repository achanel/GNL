#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int ch)
{
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)ch == *str)
		return ((char *)str);
	return (NULL);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = malloc(size + 1);
	if (!str)
		return (NULL);
	while (size > 0)
		str[size--] = 0;
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
		str[len++] = s1[i++];
	while (s2[j] != '\0')
		str[len++] = s2[j++];
	str[len] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*buffer;

	i = 0;
	len = ft_strlen(s1);
	buffer = malloc(len + 1);
	if (buffer == NULL)
		return (NULL);
	while (s1[i])
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char	*s1, char	*s2)
{
	char *star_s1 = s1;
	while(*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (star_s1);
}

int	main ()
{
	char s1[] = "";
	char s2[] = "origne en destiono ";
	printf("%s\n", ft_strcpy(s1, s2));
}
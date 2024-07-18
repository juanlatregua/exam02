#include <unistd.h>

void first_word(char	*str)
{
	while(*str == '\t' || *str == ' ')
	str++;
	while(*str && *str != '\t' && *str != ' ')
	{
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char	**argv)
{
	if(argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
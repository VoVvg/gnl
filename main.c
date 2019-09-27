#include "get_next_line.h"
#include <stdio.h>

int main()
	{
	char	*str;
	int		fd;
	int i;

	i = 1;
	fd = open("2.txt", O_RDONLY);
	while (get_next_line(fd, &str) > 0)
	{
		printf("[%d]: %s\n", i, str);
		free(str);
		i++;
	}
	free(str);
	return (0);
}
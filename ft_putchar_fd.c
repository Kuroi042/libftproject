#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
void ft_putchar_fd(char c, int fd)   
{
 
	write(fd,&c,1);
	
}

int	main()
{
	int fd;
	fd = open("test.txt", O_CREAT | O_RDWR);
	char c = 'c';
	ft_putchar_fd(c, fd);
	return 0;
}
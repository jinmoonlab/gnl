#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*gnl_strjoin(char *str, char *buffer);
int		find_newline(char *s);
int		update_gnl(char *dest, char *src, char **str);
char	*read_line(int fd, char *str, char *buff);
char	*get_next_line(int fd);
int		gnl_strlen(char *s);
char	*str_init(char *s);

#endif

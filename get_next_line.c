#include "get_next_line.h"


char *fill_line(char *line, char *s)
{
    int i;

    i = 0;
    while (s[i] && s[i] != '\n')
        i++;
    line = malloc(sizeof(char) * i + 1);
    if(!line)
        return(NULL);
    i = -1;
    while (s[++i])
        line[i] = s[i];
    line[i] = '\0';
    return(line);
}

int get_next_line(int fd, char **line)
{
    static char *over;
    char buff[BUFFER_SIZE + 1];
    int tmp;

    if(!line || !fd || BUFFER_SIZE <= 0)
        return(-1);
    while (ft_strchr(over[fd]) != 1)
    {
        tmp = read(fd,buff,BUFFER_SIZE);
        if(tmp == -1)
        {
            ft_memedel(over[fd]);
            return(-1);
        }
    }
    
}

*/

int main()
{   
    /*
    int fd;
    char *line;
    fd = open("gnl.txt",O_RDONLY);
        printf("%d",get_next_line(fd,&line));
        */
    printf("%s",joinfree("coucou ", "les amis"));
}
#include <sys/stat.h>

int checkFileExists(const char *path)
{
    struct stat s;
    if(stat(path, &s)==-1)
        return 0;
    else
        return 1;
}

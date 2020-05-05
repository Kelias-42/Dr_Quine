#include <stdio.h>
#define C "\n\"\\\t"
#define PROG "#include <stdio.h>%c#define C %c%cn%c%c%c%c%ct%c%c#define PROG %c%s%c%c#define FT(x)int main(){FILE *fd;if(!(fd = fopen(x, %cw%c))){return (-1);}fprintf(fd, PROG, C[0], C[1], C[2], C[2], C[1], C[2], C[2], C[2], C[1], C[0], C[1], PROG, C[1], C[0], C[1], C[1], C[0], C[0], C[3], C[0], C[0], C[1], C[1], C[0]);fclose(fd);return (0);}%c/*%c%cHello, this is a self-replicating comment%c*/%cFT(%cGrace_kid.c%c)%c"
#define FT(x)int main(){FILE *fd;if(!(fd = fopen(x, "w"))){return (-1);}fprintf(fd, PROG, C[0], C[1], C[2], C[2], C[1], C[2], C[2], C[2], C[1], C[0], C[1], PROG, C[1], C[0], C[1], C[1], C[0], C[0], C[3], C[0], C[0], C[1], C[1], C[0]);fclose(fd);return (0);}
/*
	Hello, this is a self-replicating comment
*/
FT("Grace_kid.c")

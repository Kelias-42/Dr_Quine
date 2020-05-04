#include <stdio.h>
#define C "\n\"\\\t"
#define PROG "#include <stdio.h>%c#define C %c%cn%c%c%c%c%ct%c%c#define PROG %c%s%c%c#define MAIN(VAR) int main(void){FILE *fd = fopen(VAR, %cw%c);fprintf(fd, PROG, C[0], C[1], C[2], C[2], C[1], C[2], C[2], C[2], C[1], C[0], C[1], PROG, C[1], C[0], C[1], C[1], C[0], C[0], C[3], C[0], C[0], C[1], C[1], C[0]);fclose(fd);return (0);}%c/*%c%cHello, this is a self-replicating comment%c*/%cMAIN(%cGrace_kid.c%c)%c"
#define MAIN(VAR) int main(void){FILE *fd = fopen(VAR, "w");fprintf(fd, PROG, C[0], C[1], C[2], C[2], C[1], C[2], C[2], C[2], C[1], C[0], C[1], PROG, C[1], C[0], C[1], C[1], C[0], C[0], C[3], C[0], C[0], C[1], C[1], C[0]);fclose(fd);return (0);}
/*
	Hello, this is a self-replicating comment
*/
MAIN("Grace_kid.c")

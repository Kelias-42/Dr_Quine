#include <stdio.h>
#include <stdlib.h>

static char c[] = "\n\"\\\t";

int main(void)
{
	int i = 5;
	FILE *fd;

	if (--i < 0)
		return (0);
	char *code = "#include <stdio.h>%c#include <stdlib.h>%c%cstatic char c[] = %c%cn%c%c%c%c%ct%c;%c%cint main(void)%c{%c%cint i = %d;%c%cFILE *fd;%c%c%cif (--i < 0)%c%c%creturn (0);%c%cchar *code = %c%s%c;%c%cchar fname[] = %cSully_x.c%c;%c%cfname[6] = i + '0';%c%cif (!(fd = fopen(fname, %cw%c)))%c%c%creturn (-1);%c";
	char fname[] = "Sully_x.c";
	fname[6] = i + '0';
	if (!(fd = fopen(fname, "w")))
		return (-1);
	fprintf(fd, code, c[0], c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[1], c[0], c[0], c[0], c[0], c[3], i, c[0], c[3], c[0], c[0], c[3], c[0], c[3], c[3], c[0], c[3], c[1], code, c[1], c[0], c[3], c[1], c[1], c[0], c[3], c[0], c[3], c[1], c[1], c[0], c[3], c[3], c[0]);
	fclose(fd);
	return (0);
}

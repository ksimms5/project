#include <string.h>
#include<stdlib.h>
int main(){
int lett=0, size=0;
char c;
int trey[128] = {}, seen[128]={} ;
FILE *fpi, *fpo;
fpi = fopen("/home/cumoja1/3320/c/ceaser1.txt", "rt");
fpo = fopen("output.txt", "w");
do {
		c = getc(fpi);
		trey[c]++;
		if (!seen[c])
			lett[c]++;
		seen[c] = 1;
		if (c == ' ' || c == '\n' || c == '\t')
		{
			for (int i = 0; i < 93; i++)
				seen[i] = 0;
			lett++;
}		}

while (!feof(fpi)); {
fputs("character	frequency	", out); 
for (int i = 65; i <= 90; i++)
	if (trey[i] != 0)
		printf(fpi, "\n%c\t\t%2d\t\t%2d", i, trey[i]);

	for (int i = 97; i <= 122; i++)
	if (trey[i] != 0)
		printf(out, "\n%c\t\t%2d\t\t\t%2d", i, trey[i]);

	for (int i = 48; i <= 57; i++)
	if (trey[i] != 0)
		printf(out, "\n%c\t\t%2d\t\t%2d", i, trey[i]);
}
fclose(fpi);
fclose(fpo);
return 2;
}


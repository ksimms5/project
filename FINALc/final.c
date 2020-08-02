#include <stdio.h>
#include <stdlib.h>
int main () {
char ch;
FILE *copy;
FILE *folder;
mkdir("/home/ksimms5/FINALc");
mkdir("/home/ksimms5/FINALc/copies");
mkdir("/home/ksimms5/FINALc/encrypted");
mkdir("/home/ksimms5/FINALc/decrypted");
copy = fopen("/home/ksimms5/final.c","r");

folder = fopen("/home/ksimms5/FINALc/final.c", "w");
while ((ch = fgetc(copy)) != EOF)
fputc(ch, folder);
fclose(copy);
fclose(folder);
return 0;

}

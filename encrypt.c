#include <stdio.h>
int main (int argv, char *argx[]) {
int i, size, key=150;
char c, input; 
DIR *fpi;
fpi = opendir("/home/ksimms5/FINALc/copies/", "rb");
while((c = fgetc(fpi)) != EOF) {
char input = (char)c;
size = sizeof(input);
c + key
key = key - 1 > 0 ? (key - 1) % 256 : 255;
closedir(dir);
return 0;
}

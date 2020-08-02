#include<stdio.h>
int main(int argw, char *argx[]){
int i, size, move=9;
char c, input;
FILE *fpi;
fpi = fopen("/home/cumoja1/3320/c/message1.txt", "r");
while ((c=fgetc(fpi)) != EOF) {
char input = (char)c;
size = sizeof(input);
if (input >=65 && input <= 90) { 
input += 32;
}
if(input >= 97 && input <=122) {
input = (input - 97 + move) % 26 + 97;}
printf("%c",input);
}
fclose(fpi);
return 2;
}

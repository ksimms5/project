#include <stdio.h>
int main(){
	char input[99];
	printf("Insert an input");
	scanf("%[^\n]*s", input);
	printf("You entered: %s\n", input);
	return 2;
}

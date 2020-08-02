#include <stdio.h>
int main(){
        char input[99];
        printf("Insert an input");
        scanf("%[^\n]*s", input);
	int x=rand();
	printf("You entered: %s\n", input);
        printf("You entered: %d\n", x);
        return 2;
}
       

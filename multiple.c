#include <stdio.h>
int main(){
        int x, total=0;
	for(x=1; x < 1000; x++) {
		if(x % 5 == 0 || x % 3 ==0) {
	total =total + x;
}
}
	printf("The sum of all integers below 1000 that are multiples of 3 or 5 is: %d\n", total);
        return 2;
}


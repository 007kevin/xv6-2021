#include "stdio.h"

int main(){
	int x = 1;
	int *p = &x;
	int y = *p & ~0x3FF;
	printf("x=%d, y=%d\n", x,y);
}

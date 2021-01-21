#include <stdlib.h>
#include <stdio.h>

// example from https://www.cprover.org/cbmc/doc/manual.pdf

void f (int i) {
	int *p;
	int y;
	p=malloc(sizeof(int)*10);
	if (i) {
	    p=&y;
	}
	free(p);
}

int main() {
	f(0);
	f(1);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,h = 0,t = 0;
	char name[10];

	printf("tossing a coin...\n");

	for(int i = 1; i <= 3; i++) {
		x = rand() % 2;
		printf("round%d :", i);
		if (x == 0) {
			printf("Heads\n");
			h++;
		}
		else {
			printf("Tails\n");
			t++;
		}
	}
	printf("Heads: %d, Tails: %d\n", h, t);
}
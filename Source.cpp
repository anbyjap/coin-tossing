#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,h = 0,t = 0;
	char name[10];

	printf("Who are you?\n> ");
	scanf("%s", name);
	printf("Hello, %s!\n", name);

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

	if (h > t) printf("You won \n");
	else printf("You lost \n");

}
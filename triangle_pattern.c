#include <stdio.h>

int main() {
	int count;
	printf("Please enter the number of columns for the pyramid: ");
	scanf("%d", &count);
	int i = 0;
	int j;
	while(i < count) {
		for(j = 0; j < i + 1; j++) {
			printf("@");
		}
		printf("\n");
		++i;
	}
	return 0;
}

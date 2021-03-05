#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int people;
	scanf("%d", &people);

	int mass[50];
	int height[50];
	int rank[50];
	for (int i = 0; i < people; i++) {
		scanf("%d %d", &mass[i], &height[i]);
		rank[i] = 1;
	}

	for (int i = 0; i < people; i++) {
		for (int j = 0; j < people; j++) {
			if (mass[i] > mass[j] && height[i] > height[j])
				rank[j]++;
		}
	}
	for (int i = 0; i < people; i++)
		printf("%d	", rank[i]);


	return 0;
}
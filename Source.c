#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[11];
	for (int n = 0; n < 11; n++) {
		scanf("%d", &arr[n]);
	}
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (arr[j] < arr[i]) {
				int a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	printf("%d", arr[5]);
}

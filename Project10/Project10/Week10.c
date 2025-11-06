#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char input[100];
	int i;
	FILE* fp;

	fp = fopen("sample.txt", "w");
	
	for (i = 0;i < 3; i++) {
		printf("input a word: ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}

	fclose(fp);

	return 0;
}
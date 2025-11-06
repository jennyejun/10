#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char input[100];
	char c;
	FILE* fp;

	fp = fopen("sample.txt", "r");
	if (fp == NULL) printf("Failed to open file!\n");
	
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}
	/*
	while (fgets(input, 100, fp) > 0) {
		printf("%s", input);
	}
	*/
	fclose(fp);

	return 0;
}
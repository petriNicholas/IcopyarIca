#include <iostream>
#include "const.h"
void text() {
	char input[100];
	
	FILE* fp;
	int bytes = 0;
	printf("Write the path to the file that contents information you want to copy : ");
	scanf_s("%s", input, 100);
	fopen_s(&fp, input, "r");

	if (fp == NULL) {
		printf("Could not open the file\n");
	}
	else {
		printf("Write the path to the file that contents information you want to copy : ");
		scanf_s("%s", input, 100);
		FILE* fp2;
		fopen_s(&fp2, input, "w");
		if (fp2 == NULL) {
			printf("Could not open the file\n");
			fclose(fp);
		}
		else {
			printf("Write how big buffer you want[bytes]: ");
			scanf_s("%d", &bytes);
			char* copy = (char*)malloc(bytes * sizeof(char));
			int s = 0;
			while (!std::feof(fp)) {
				s = fread(copy, 1, bytes, fp);
				fwrite(copy, 1, s, fp2);
			}
			fclose(fp);
			fclose(fp2);
			free(copy);
		}
	}
}

void bin() {
	//std::string input;
	char input[100];

	FILE* fp;
	int bytes = 0;
	printf("Write the path to the file that contents information you want to copy : ");
	scanf_s("%s", input, 100);
	//const char* pathFrom = input.c_str();
	fopen_s(&fp, input, "rb");

	if (fp == NULL) {
		printf("Could not open the file\n");
	}
	else {
		printf("Write the path to the file that contents information you want to copy : ");
		scanf_s("%s", input, 100);
		//const char* pathFrom = input.c_str();
		FILE* fp2;
		fopen_s(&fp2, input, "wb");
		if (fp2 == NULL) {
			printf("Could not open the file\n");
			fclose(fp);
		}
		else {
			printf("Write how big buffer you want[bytes]: ");
			scanf_s("%d", &bytes);
			char* copy = (char*)malloc(bytes * sizeof(char));
			int s = 0;
			while (!std::feof(fp)) {
				s = fread(copy, 1, bytes, fp);
				fwrite(copy, 1, s, fp2);
			}
			fclose(fp);
			fclose(fp2);
			free(copy);
		}
	}
}

void user(char* pathFrom, char* pathTo, char* tryb, char* buffor) {
	if (tryb == t1 || tryb == t2) {
		FILE* fp;
		int bytes = 0;
		fopen_s(&fp, pathFrom, "r");

		if (fp == NULL) {
			printf("Could not open the file\n");
		}
		else {
			FILE* fp2;
			fopen_s(&fp2, pathTo, "w");
			if (fp2 == NULL) {
				printf("Could not open the file\n");
				fclose(fp);
			}
			else {
				char* copy = (char*)malloc( atoi(buffor) * sizeof(char));
				int s = 0;
				while (!std::feof(fp)) {
					s = fread(copy, 1, atoi(buffor), fp);
					fwrite(copy, 1, s, fp2);
				}
				fclose(fp);
				fclose(fp2);
				free(copy);
			}
		}
	}
}
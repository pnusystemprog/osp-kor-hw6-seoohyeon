#include <stdio.h>
#include <string.h>
#include "phone.h"
extern struct Contact PhoneBook[MAX];
extern int size;
void deleteByName() {
	int i, j, k, cmp;
	char delName[10];
	printf(">> Enter a name to delete: ");
	scanf("%s", delName);
	for (i = 0; i < size; i++) {
		cmp = strcmp(PhoneBook[i].Name, delName);
		if (cmp == 0) {
			printf("%s is deleted...\n", PhoneBook[i].Name);
			break;
		}
	}
	if (i == size)
		printf("Oops! %s is not in the PhoneBook.\n", delName);
	if (i < size) {
		for (j = i; j < size - 1; j++) {
			for (k = 0; k < 10; k++)
				PhoneBook[j].Name[k] = PhoneBook[j + 1].Name[k];
			for (k = 0; k < 13; k++)
				PhoneBook[j].PhoneNumber[k] = PhoneBook[j + 1].PhoneNumber[k];
		}
		size--;
	}
}

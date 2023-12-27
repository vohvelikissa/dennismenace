#include<malloc.h>
#include<string.h>

int main() {
	int vitunpituus = strlen("vittu");
	char vittu[vitunpituus];
	char *vp = malloc(strlen(vittu));
	for (int i = 0; i < vitunpituus; i++) {
		vittu[i] = 'a';
	}
	free(vp);
	printf("%s",vittu);
}

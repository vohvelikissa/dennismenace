#include<malloc.h>
#include<string.h>

int main() {
	char *vp = malloc(strlen("vittu"));
	for (int i = 0; i < strlen(vp); i++) {
		vp[i] = 'a';
	}
	printf("%s",vp);
	free(vp);
	printf("%s",vp);
}

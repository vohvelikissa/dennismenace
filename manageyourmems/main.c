#include<malloc.h>
#include<string.h>

int main() {
	char vittu[] = "vittu";
	char *vp = malloc(strlen(vittu));
	free(vp);
}

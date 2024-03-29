#include<stdio.h>

struct exchange_rate {
	char source[3];
	char dest[3];
	float exchangeRate;
};

void copyStringToElsewhere(char *a, char *b) {
	for (int i = 0; i < 3; i++) {
		a[i] = b[i];
	}
}

struct exchange_rate getRate(char source[], char dest[], float exchangeRate) {
	struct exchange_rate ex;
	copyStringToElsewhere(ex.source, source);
	copyStringToElsewhere(ex.dest, dest);
	ex.exchangeRate = exchangeRate;
	return ex;
}

int stringsEqual(char *a, char *b) {
	for (int i = 0; i < 3; i++) {
		if(a[i] != b[i]) {
			return 0;
		}
	}
	return 1;
}

float getRateOfDestAndSource(struct exchange_rate a[], char source[], char dest[], int lengthll) {
	for (int i = 0; i < lengthll; i++) {
		a[i].
	}
	return 0;
}

int main() {
	//usdjpy
	//usdaud
	//jpygbp
	//gbp -> aud
	//convert_currency([currency_rates], start, end)
}

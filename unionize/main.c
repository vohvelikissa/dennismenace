int main() {
	struct a {
		int ok: 1;
	};
	union b {
		struct a c;
		struct a d;
	};
}	

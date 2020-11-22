#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void help_options() {
	printf("--------------------------\n");
	printf("Executed with '--help':\n\n");
	printf("Supported arguments:\n");
	printf("About\n");
	printf("Partners\n");
	printf("--------------------------\n");
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		fprintf(stderr, "Wrong number of operands. Exiting...\n");
		fprintf(stderr, "Run with `--help`\n");
		exit(1);
	}

	// Help options
	if (strncmp(argv[1], "--help", 6) == 0) {
		help_options();
		fprintf(stdout, "Run any of the options as follows: ./qwerHacks [OPTION]\n");
		fprintf(stdout, "Exiting...\n");
		exit(0);
	}

	if (strncmp(argv[1], "About", 7) == 0) {
		fprintf(stdout, "QWER Hacks is Major League Hacking's first LGBTQIA hackathon, held at UCLA! For 24 hours, around 150 amazing student hackers will work together to create fantastic and innovative products meant to help underrepresented groups.\n");
		fprintf(stdout, "Through empowering talks from queer individuals in tech, technical and diversity & inclusion workshops, and the development of new products, QWER Hacks aims to increase the visibility of and celebrate the queer community in STEM, as well as engage and bring together queer individuals and allies.\n");
	}

	if (strncmp(argv[1], "Partners", 8) == 0) {
		fprintf(stdout, "Society of Women Engineers\n");
		fprintf(stdout, "ACM AI\n");
		fprintf(stdout, "ACM W\n");
		fprintf(stdout, "ACM Teach LA\n");
		fprintf(stdout, "ACM Game Studio\n");
		fprintf(stdout, "Queer & Trans in STEM\n");
		fprintf(stdout, "WATT at UCLA\n");
		fprintf(stdout, "The Trevor Project\n");
	}

	if (strncmp(argv[1], "up2you", 6) == 0) {
		fprintf(stdout, "hi\n");
	}
}

#include <stdio.h>
#include <unistd.h>

int main(int argc, char ** argv){

	char option = '\0';

	if (argc < 3){
		fprintf(stderr, "mtozal: Too few arguments\n");
		return 1;
	}

	if ( (argv[1][0] != '-' && argc > 3)){
		fprintf(stderr, "mtozal: Too many arguments\n");
		return 1;
	}

	// Check if an option is specified
	if ( argv[1][0] == '-' ){
		if ( argc > 4){
			fprintf(stderr, "mtozal: Too many arguments\n");
			return 1;
		}
		option = argv[1][1];
	}
	
	switch (option){
		case '\0':	// Hard Link
			if ( link(argv[1], argv[2]) < 0 ){
				perror("mtozal");
			}
			break;
		case 's':	// Soft Link
			if ( symlink(argv[2], argv[3]) < 0 ){
				perror("mtozal");
			}
			break;
		default:
			fprintf(stderr, "mtozal: Invalid argument to ln\n");
			return 1;
	}
	return 0;
}


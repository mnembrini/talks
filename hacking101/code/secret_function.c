#include <stdio.h>
#include <windows.h>
#include <string.h>

void secretFunction()
{
    printf("Congratulations!\n");
    printf("You have entered in the secret function!\n");
}

void echo(char *input)
{
    char buffer[20];
	printf("You entered:\n");    
	char *c = input;
	do {		
		printf("%02X", (unsigned char)*c); 
		c++;
	} while (*c != 0);
	printf("\n");
	
	// overflow happens here
    strcpy(buffer, input);
    
	
	
}

int main(int argc, char *argv[])
{

	if (argc<2) {
		printf("Usage: secret_function.exe filename");
		exit(-1);
	}

	printf("Waiting 20s ...\n");    
	// give time to attach a debugger
	Sleep(20000);
	
	// read input from file given as  first argument
	FILE *file;
	char buffer[200];
	file = fopen(argv[1], "rb");
	fread(buffer,1, 200, file);
	fclose(file);

    echo(buffer);
	
	printf("We are done\n");    

    return 0;
}
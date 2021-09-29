#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(int argc, char * argv[]) 
{ 
	if (argc < 2) return 1; 					// Read a file from its arguments
	char * filename = argv[1]; 
	FILE * fp = fopen(filename, "r"); 			// Open file
	if (fp == NULL) return 1; 					// Return error if file is empty
	int t,i = 0;
	char *s1 = malloc(sizeof(char) * 100);		// Initialize patient DNA 
	char *s2 = malloc(sizeof(char) * 100);		// Initialize viral DNA
	fscanf (fp, "%d", &t);  
	while(i!=t){								// 
		int flag = 0;
		fscanf(fp, "%s", s1);					// Scan patient DNA 
		fscanf(fp, "%s", s2);					// Scan viral DNA
		const char* p = s1;
		while (p) {
			p = strstr(p, s2);					// Find s2 position in p
			if (p) {
				printf("%td ", p-s1);			// Print position
				p++;  							// Skip one character
				flag = 1;						
        	}
    	}
		if (flag == 0){
			printf("N/A");						// Print if substring does not exist
		}
		printf("\n");
		i++;									// Increment i
	}
	fclose(fp); 
	return 0; 
} 
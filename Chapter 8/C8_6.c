#include <stdio.h>
#include <ctype.h>

#define N (int)(sizeof(m) / sizeof(m[0]))

int main()
{
	char m[100], input;
	int i;
	
	printf("Enter a message: ");
	
	for (i=0; i<N; i++)
	{
		switch (input = toupper(getchar()))
		{
			case 'A':
				m[i] = '4';
				break;
			case 'B':
				m[i] = '8';
				break;
			case 'E':
				m[i] = '3';
				break;
			case 'I':
				m[i] = '1';
				break;
			case 'O':
				m[i] = '0';
				break;
			case 'S':
				m[i] = '5';
				break;
			default:
				m[i] = input;
 		}
 		
 		if (input == '\n')
 			break;
	}
	
	printf("In B1FF-speak: ");
	
	for(i=0; i<N; i++)
	{
		if (m[i] == '\n')
			break;
		putchar(m[i]);
	}
	printf("!!!!!!!!!!\n");
	
	return 0; 
}



#include<stdio.h>

int main(int argc, char const *argv[])
{
	char *states[] = {"Gujarat","West Bengal","Maharashtra","Karnataka",NULL};


	argv[0] = states[0];
	states[2] = argv[2];	
	for (int i = 0; i < argc; ++i)
		{
			printf("Argument no.%d is %s\n",argc,argv[i] );
		}	


	int size = sizeof(states)/sizeof(states[0]);
	
	for (int i = 0; i < size; ++i)
	{
		printf("%s\n", states[i]);
	}
	return 0;
}
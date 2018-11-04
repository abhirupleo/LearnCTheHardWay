#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	for (int i = 0; i < argc; ++i)
		{
			printf("Argument no.%d is %s\n",argc,argv[i] );
		}	

	char *states[] = {"Gujarat","West Bengal","Maharashtra","Karnataka",NULL};

	int size = sizeof(states)/sizeof(states[0]);
	
	for (int i = 0; i < size; ++i)
	{
		printf("%s\n", states[i]);
	}
	return 0;
}
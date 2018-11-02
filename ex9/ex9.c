#include<stdio.h>

int main(int argc, char const *argv[])
{
	//this is the code to print the arguments
	int i = 0;
	while(i<argc){
		printf("Arg%d: %s\n",i,argv[i] );
		i++;
	}
	//this is the code to print the name of the states
	char *states[] = {"California","New York","Philadelphia","Newark"};
	int j = 0;
	int size = sizeof(states)/sizeof(states[0]);
	while(j<size){
		printf("States: %d %s\n",(j+1),states[j] );
		j++;
	}
	return 0;
}
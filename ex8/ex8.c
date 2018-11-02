#include<stdio.h>

int main(int argc, char const *argv[])
{
	if (argc==2)
	{
		printf("You suck you have only one argument\n");
	}else if(argc>2 || argc<4){
		printf("Here are your arguments\n");

		for (int i = 0; i < argc; ++i)
		{
			printf("%s\n",argv[i] );
		}
	}else if(argc>10){
		printf("You have too many arguments\n");
	}
	return 0;
}
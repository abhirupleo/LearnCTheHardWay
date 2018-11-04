#include<stdio.h>
#include<ctype.h>	//include this header for the isalpha() and isblank() function
#include<string.h>	//include this header for the strlen function

//forward declarations
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]){
	int i = 0;

	for (i=0; i < argc; ++i)
	{
		print_letters(argv[i]);
	}
}

void print_letters(char arg[]){
	//using the strlen function to get the length of the string 
	int size = strlen(arg);
	for (int i = 0; i<size; ++i)
	{
		char ch = arg[i];

		if(isalpha(ch)||isblank(ch)){		//got rid of the can_print_it function for this single line of code
			printf("%c' == %d ",ch,ch );
		}
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	print_arguments(argc,argv);
	return 0;
}
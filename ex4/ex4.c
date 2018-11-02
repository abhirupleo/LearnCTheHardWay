#include <stdio.h>


//crash code
void crash(){
	char *test = NULL;
	int i= 0;

	printf("%c\n",test[i]);
}

//main function
int main(int argc, char *argv[])
{
	
	int age=100;
	int height = 72;
	crash();
	crash();
	printf("I am %d years old\n", age );
	printf("I am %d inches tall\n", height );
	return 0;
} 
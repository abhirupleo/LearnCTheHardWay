#include<stdio.h>

int main(int argc, char const *argv[])
{
	//create two arrays of our choice
	int numbers[] = {1,2,3,4,5};
	char *names[] = {"Abhirup","Rick","Morty","Jake","Amy"};

	//safely get the size of the arrays
	int size = sizeof(numbers)/sizeof(numbers[0]);

	//first way using indexing
	for (int i = 0; i < size; ++i)
	{
		printf("I rate %s as %d\n",names[i],numbers[i] );
	}

	printf("-------\n");

	//setup pointers to the start of arrays
	int *numberptr = numbers;
	char **charptr = names;

	//second way using pointer arithmetics
	for (int i = 0; i < size; ++i)
	{
		printf("I rate %s as %d\n",*(charptr+i),*(numberptr+i) );
	}

	printf("-------\n");
	//third way using indexing
	for (int i = 0; i < size; ++i)
	{
		printf("I rate %s as %d\n",charptr[i],numberptr[i] );	
	}

	printf("-------\n");
	//fourth way using a complex way which is to be used when we need speedier functions
	for (charptr=names,numberptr=numbers; numberptr-numbers < size; numberptr++,charptr++)
	{
		printf("I rate %s as %d\n",*charptr,*numberptr );	
	}
	return 0;
}
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int number[4] = { 0 };
	char *name[4] = { 'a' };

	//printing them out with the raw data
	printf("%d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("%c %c %c %c\n",name[0],name[1],name[2],name[3] );

	printf("name: %s\n",name );

	//set up the numbers
	number[1]=1;
	number[2]=2;
	number[3]=3;
	//set up the name
	//name[1]='b';
	//name[2]='c';
	//name[3]='\0';

	//print them out initialised
	printf("number initialised: %d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("name initialised: %c %c %c %c\n",name[0],name[1],name[2],name[3] );

	//print the name array like a string
	printf("%s\n", name);

	//another way to print the name
	char *another = "Abhirup";
	printf("%s\n", another);
	//getting the size of the array
	int size = sizeof(another)/sizeof(another[0]);
	//running the for loop to print the characters one by onegit 
	for (int i = 0; i < size; ++i)
	{
		printf("%c ", another[i]);
	}
	printf("\n");
	//this is the return statement
	return 0;
}
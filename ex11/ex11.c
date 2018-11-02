#include<stdio.h>

int main(int argc, char const *argv[])
{
	int number[4] = { 0 };
	char strings[4] = { 'a' };

	//printing them out with the raw data
	printf("%d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("%c %c %c %c\n",strings[0],strings[1],strings[2],strings[3] );

	printf("name: %s\n",strings );

	//set up the numbers
	number[1]=1;
	number[2]=2;
	number[3]=3;
	//set up the strings
	strings[1]='b';
	strings[2]='c';
	strings[3]='\0';

	//print them out initialised
	printf("%d %d %d %d\n",number[0],number[1],number[2],number[3]);
	printf("%c %c %c %c\n",strings[0],strings[1],strings[2],strings[3] );

	//print the strings array like a string
	printf("%s\n", strings);
	return 0;
}
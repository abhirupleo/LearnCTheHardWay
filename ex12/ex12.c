#include<stdio.h>

int main(int argc, char const *argv[])
{
	int areas[] = {10,20,30,40,50};
	char name[] = "Abhirup";
	char fullname[] = {
		'A','b','h','i','r','u','p'
		,' ','p','a','n','j','a',
		'a'
	};
	printf("The size of an int is %ld\n",sizeof(int) );
	printf("The size of areas[] is %ld\n",sizeof(areas) );
	printf("The number of characters in areas is %ld\n",sizeof(areas)/sizeof(int) );
	printf("The first area is %d and the second area is %d\n",(areas[0]),(areas[10]) );
	printf("The size of a char is %ld\n",sizeof(char) );
	printf("The size of name char[] is %ld\n",sizeof(name) );
	printf("The size of fullname is %ld\n",sizeof(fullname) );
	printf("The number of characters in fullname is %ld\n",sizeof(fullname)/sizeof(char) );


	//trying to figure out the sizes of different data types
	printf("The size of floats is %ld\n",sizeof(float) );
	printf("The size of long is %ld\n",sizeof(long) );
	printf("The size of unsigned long is %ld\n",sizeof(unsigned long) );

	printf("The name is %s\n",name );
	printf("The fullname is %s\n",fullname+1000 );
	return 0;
}
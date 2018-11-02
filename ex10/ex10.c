#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
	if(argc!=2){
		printf("You can use only one argument\n");
		return 1;
	}
	for (int i = 1; i < argc; i++)
	{
		char letter=toupper(argv[i][0]);
		for (int j = 0; letter!='\0'; j++,letter=toupper(argv[i][j]))
		{
			switch(letter){
				case 'A':printf("%d 'A'\n",i );break;
				case 'E': printf("%d 'E'\n",i );break;
            	case 'I':printf("%d 'I'\n", i);break;
            	case 'O':printf("%d 'O'\n", i);break;            
            	case 'U':printf("%d 'U'\n", i);break;
            	default:printf("%d Not a vowel %c\n",j,letter );
			}
		}
	}
	return 0;
}
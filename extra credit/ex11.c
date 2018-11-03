#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
   //int i;
   char nameString[4] = {'A','A','A','A'};
   int name=0;

   //for ( i = 0; i < 4; ++i )
   //{
   //   name = (name << 8) + nameString[i];
   //}

   name = (nameString[0]<<24) + (nameString[1]<<16) + (nameString[2]<<8) + (nameString[3])

   printf("%d\n", name);

   return 0;
}
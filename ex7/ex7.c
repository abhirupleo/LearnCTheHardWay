#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int distance = 100;
	float power = 2.434f;
	double super_power = 999999999999999999999999.999999999;
	char intial = 'A';
	char first_name[] = "Abhirup";
	char last_name[] = "Panja";

	first_name[8] = 'A';

	printf("Distance %d\n",distance );
	printf("Power %f\n",power );
	printf("Super Power %lf\n",super_power );
	printf("Initial %c\n",intial );
	printf("First Name %s\n",first_name+100);
	printf("Full Name %c %s %s\n", intial,first_name,last_name);

	int bugs =100;
	double bug_rate = 1.2;

	printf("You have %d bugs at an imaginary rate of %lf\n", bugs,bug_rate );

	long universe_of_defects = 1L * 1.234L *32L;

	printf("The universe has %ld number of bugs\n", universe_of_defects );

	double expected_bugs = bugs * bug_rate;

	printf("You are expected to encounted %lf number of bugs\n",expected_bugs );

	double part_of_universe = expected_bugs/universe_of_defects;

	printf("This is only %lf percect of bugs\n",part_of_universe );

	//this makes no sense, just a demo of something wierd

	char null_byte= '\0';
	int care_percentage = bugs*null_byte;

	printf("Which means you should care %d%%\n", care_percentage );
	return 0;
}
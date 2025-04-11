#include <stdio.h>
#include <unistd.h>

int g_val = 10;

int main( int argc, char * argv[])
{

	pid_t pid;
	int l_val = 20;
	g_val = g_val + 1;
	l_val = l_val + 5;

	pid = fork();

	if( pid == 0 )
	{

		g_val = g_val + 2;
		l_val = l_val + 2;

	}
	else
	{

		g_val = g_val - 2;
		l_val = l_val - 2;

	}

	if( pid == 0 ) 
	{

		printf( "Child Proc : [ %d, %d ]\n", g_val, l_val );

	}
	else
	{

		printf( "Parent Proc : [ %d, %d ]\n", g_val, l_val );

	}

}

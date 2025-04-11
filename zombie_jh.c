#include <stdio.h>
#include <unistd.h>

int main( int argc, char * argv[])
{

	pid_t pid = fork();

	if( pid == 0 )
	{

		puts( "Hi i'm child process" );

	}
	else
	{

		printf( "Child Process ID : %d \n", pid );
		sleep( 30 );

	}

	if( pid == 0 )
	{
		
		puts( "End child process" );

	}
	else
	{

		puts( "End parent prcess" );

	}

	return 0;

}

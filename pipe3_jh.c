#include <stdio.h>
#include <unistd.h>


#define BUF_SIZE 30



int main( int argc, char * argv[])
{
	
	int pipe1[ 2 ];
	int pipe2[ 2 ];
	char data1[] = "Who are you?";
	char data2[] = "jinseok is stupid!";
	char buf[ BUF_SIZE ];
	pid_t pid;

	pipe( pipe1 );
	pipe( pipe2 );
	pid = fork();

	if( pid == 0 )
	{

		write( pipe1[ 1 ], data1, sizeof( data1 ));
		read( pipe2[ 0 ], buf, BUF_SIZE );
		printf( "Child proc output : %s \n", buf );

	}

	else
	{

		write( pipe2[ 1 ], data2, sizeof( data2 ));
		read( pipe1[ 0 ], buf, BUF_SIZE );
		printf( "Parent proc output : %s \n", buf );
		sleep( 3 );
	}

	return 0;

}

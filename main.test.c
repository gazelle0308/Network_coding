#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>


void error_handling( char * message )
{

	fputs( message, stderr );
	fputc( '\n', stderr);
	exit( 1 );

}


int main( int argc, char * argv[])
{

	printf( "인자 갯수: %d\n", argc );
	printf( "실행 파일: %s\n", argv[ 0 ]);

	for( int loop_argv = 1; loop_argv < argc; loop_argv = loop_argv + 1 )
	{

		printf( "추가된 인자 : %s\n",argv[ loop_argv ]);
	
	}

	return 0;

}

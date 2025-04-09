#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{


	int file_disk;
	char buffer[ 20 ];
	ssize_t read_st;

	file_disk = open( "hello.txt", O_RDONLY );
	if( file_disk < 0 )
	{
	
		perror( "could not open " );
		exit( 1 );

	}

	read_st = read( file_disk, buffer, sizeof( buffer ));

	if( read_st < 0 )
	{
	
		perror( "failed to reaad form file " );
		exit( 1 );

	}
	printf( "Read from file : %s\n", buffer );

}

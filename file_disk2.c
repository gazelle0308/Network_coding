#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{

	int file_disk;
	char string_data[] = "Hello socket!";

	file_disk = open( "hello.txt", O_CREAT | O_WRONLY | O_TRUNC );

	if( file_disk < 0 )
	{

		perror( "could not open hello.txt" );
		exit( 1 );

	}
	if( write( file_disk, string_data, sizeof( string_data ) == -1 ))
	{
		
		perror( "could not write hello.txt" );
		close( file_disk );
		exit( 1 );

	}
}

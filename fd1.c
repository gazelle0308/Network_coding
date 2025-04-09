#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{

	int file_disk;
	file_disk = open( "alpha.txt", O_CREAT | O_RDONLY );

	if( file_disk < 0 ) 
	{
		
		perror( "Could not open alpha.txt" );
		exit( 1 );

	}
	else
	{

		printf( "open success\n" );
		printf( "file disciptor : %d\n", file_disk );

	}

}

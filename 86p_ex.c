#include <stdio.h>
#include <arpa/inet.h>

int main( int argc, char * argv[] )
{

	char * address_1 = "1.2.3.4";
	char * address_2 = "1.2.3.256";

	unsigned long conv_address = inet_addr( address_1 );

	if( conv_address == INADDR_NONE )
	{

		printf( "Error occured! \n" );

	}
	else
	{

		printf( "Network ordered integer address : %#lx \n", conv_address );

	}

	conv_address = inet_addr( address_2 );

	if( conv_address == INADDR_NONE )
	{

		printf( "Error occured! \n" );

	}
	else
	{

		printf( "Network ordered integer address : %#lx \n", conv_address );

	}

}


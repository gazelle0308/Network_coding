#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>


int main( int argc, char * argv[] )
{

	char * pin_addr = "127.232.124.79";
	struct sockaddr_in addr_inet;

	if( !inet_aton( pin_addr, &addr_inet.sin_addr ))
	{

		error_handling( "Conversion error" );

	}
	else
	{

		printf( "Network ordered integer addr : %#x \n", addr_inet.sin_addr.s_addr );

	}

	return 0;

}


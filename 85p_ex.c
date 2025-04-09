#include <stdio.h>
#include <winsock2.h>

int main( int argc, char * argv[] )
{

	WSADATA wsa_data;
	unsigned short host_port = 0x1234;
	unsigned short net_port;
	unsigned long host_addr = 0x12345678;
	unsigned long net_addr;

	if( WSAStartup( MAKEWORD( 2, 2), &wsa_data != 0 )
	{

		error_handling( "WSAStartup() error!" );

	}

}

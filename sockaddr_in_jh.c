#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <arpa/inet.h>


struct my_sockaddr_in
{
	unsigned short sin_family;
	struct my_addr sin_addr;
	uint16_t  



}

void main()
{

	struct my_sockaddr_in my_addr;
	const char * serv_ip = "127.0.0.1";
	const char * serv_port = "3568";

	memset( my_addr, 0, sizeof( my_addr ));
	my_addr.sin_family = AF_INET;
	my_addr.sin_addr.s_addr = inet_addr( serv_ip );
	my_addr.sin_port = htons( atoi( serv_port ));
	

}

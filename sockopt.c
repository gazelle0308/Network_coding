#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>



int main()
{

	int sock;
	int snd_buf, rcv_buf;
	socklen_t opt_len;

	sock = socket( PF_INET, SOCK_STREAM, 0 );

	opt_len = sizeof( snd_buf );

	if( getsockopt( sock, SOL_SOCKET, SO_SNDBUF, ( void * )&snd_buf, & opt_len ) < 0 )
	{

		printf("get sock opt failed!");

	}

	printf("Send buf size : %d\n", snd_buf);

	opt_len = sizeof( rcv_buf );

	if( getsockopt( sock, SOL_SOCKET, SO_SNDBUF, ( void * )&rcv_buf, & opt_len ) < 0 )
	{

		printf("get sock opt failed!");

	}

	printf("rcv buf size : %d\n", rcv_buf);

	rcv_buf = 8192;
	if( setsockopt( sock, SOL_SOCKET, SO_RCVBUF, &rcv_buf, sizeof( rcv_buf )) < 0 )
	{

		perror("set sock opt failed!");
	
	}

	printf("rcv buf size : %d\n", rcv_buf);

}

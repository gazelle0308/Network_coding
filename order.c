#include <stdio.h>

void main()
{

	int alpha = 0x1234567;
	char * pin_alpha = &alpha;

	printf( "n : %#x\n", alpha );
	printf( "&n : %p\n", &alpha );
	printf( "1st : %p, %#x\n", &( *pin_alpha ), *pin_alpha );
	printf( "2nd : %p, %#x\n", &*( pin_alpha + 1 ), *( pin_alpha + 1 ));
	printf( "3rd : %p, %#x\n", &*( pin_alpha + 2 ), *( pin_alpha + 2 ));
	printf( "3rd : %p, %#x\n", &*( pin_alpha + 3 ), *( pin_alpha + 3 ));


}

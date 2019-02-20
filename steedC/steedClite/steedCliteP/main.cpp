#include <stdio.h>
#include"types.h"
#include"bitboards.h"
int main(int argc, char **argv)
{
	printf("hello world\n");
	Bitboard b=87;
	printf("%d\n",popcount(b));
	return 0;
}

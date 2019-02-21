#include <stdio.h>
#include"bitboards.h"
int main(int argc, char **argv)
{
	printf("hello world\n");
	uint64_t b=87ull;
	printf("%d\n",popcount(b));
    printBitboard(b);
	return 0;
}

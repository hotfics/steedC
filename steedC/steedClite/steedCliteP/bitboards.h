#include"types.h"
int popcount(Bitboard b) ;
int getlsb(Bitboard b) ;
int getmsb(Bitboard b) ;
bool several(uint64_t b) ;
bool onlyOne(uint64_t b) ;
void setBit(uint64_t *b, int i);
void clearBit(uint64_t *b, int i);
bool testBit(uint64_t b, int i);

void printBitboard(uint64_t b);
int square(int r, int f);
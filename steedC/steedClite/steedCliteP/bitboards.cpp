#include "bitboards.h"
#include <assert.h>
#include<stdio.h>
int popcount(Bitboard b) {
    return __builtin_popcountll(b);
}
int getlsb(Bitboard b) {
    assert(b);  // lsb(0) is undefined
    return __builtin_ctzll(b);
}

int getmsb(Bitboard b) {
    assert(b);  // msb(0) is undefined
    return __builtin_clzll(b) ^ 63;
}
bool several(uint64_t b) {
    return b & (b - 1);
}

bool onlyOne(uint64_t b) {
    return b && !several(b);
}
void setBit(uint64_t *b, int i) {
    assert(!testBit(*b, i));
    *b ^= 1ull << i;
}

void clearBit(uint64_t *b, int i) {
    assert(testBit(*b, i));
    *b ^= 1ull << i;
}

bool testBit(uint64_t b, int i) {
    assert(0 <= i && i < SQUARE_NB);
    return b & (1ull << i);
}

void printBitboard(uint64_t b) {
    for (int r = 7; r >= 0; r--) {
        char line[] = ". . . . . . . .";

        for (int f = 0; f < FILE_NB; f++)
            if (testBit(b, square(r, f)))
                line[2 * f] = 'X';

        printf("%s\n", line);
    }
    printf("\n");
}
int square(int r, int f) {
    assert(0 <= r && r < RANK_NB);
    assert(0 <= f && f < FILE_NB);
    return r * FILE_NB + f;
}

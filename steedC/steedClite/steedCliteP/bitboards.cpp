#include "bitboards.h"
#include <assert.h>
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
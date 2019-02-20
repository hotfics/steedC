#include "bitboards.h"
int popcount(Bitboard b) {
    return __builtin_popcountll(b);
}
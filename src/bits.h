#pragma once
#include "types.h"
// bit utilities for bitboard arithmetic
#include<bit>

constexpr Bitboard GetBitBoard(const Position position){
    return 1Ull << position;
}
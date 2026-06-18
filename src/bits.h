#pragma once
#include "types.h"
// bit utilities for bitboard arithmetic
#include<bit>


constexpr Bitboard GetBitBoard(const Position position){
    return 1Ull << position;
}

// ?
constexpr Position BitScanForward(const Bitboard bitboard){
	return static_cast<Position>(std::countr_zero(bitboard));
}

// ?
constexpr Bitboard ReverseBits(Bitboard bitboard){
    const Bitboard h1 = 0x5555555555555555;
    const Bitboard h2 = 0x3333333333333333;
    const Bitboard h4 = 0x0f0f0f0f0f0f0f0f;
    const Bitboard v1 = 0x00ff00ff00ff00ff;
    const Bitboard v2 = 0x0000ffff0000ffff;
    bitboard = ((bitboard >> 1) & h1) | ((bitboard & h1) << 1);
    bitboard = ((bitboard >> 2) & h2) | ((bitboard & h2) << 2);
    bitboard = ((bitboard >> 4) & h4) | ((bitboard & h4) << 4);
    bitboard = ((bitboard >> 8) & v1) | ((bitboard & v1) << 8);
    bitboard = ((bitboard >> 16) & v2) | ((bitboard & v2) << 16);
    bitboard = (bitboard >> 32) | (bitboard << 32);
    return bitboard;
}

// ?
constexpr uint8_t PopCount(const Bitboard bitboard){
    return static_cast<uint8_t>(std::popcount(bitboard));
}
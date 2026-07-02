#pragma once

#include<cassert>
#include<cstdint>
#include<limits>

// xorshift64 psuedo-random number generator
class PRNG
{
    uint64_t s;

public:
    constexpr PRNG() : s(1070372)
    {
        assert(s);
    }

    constexpr uint64_t rand64()
    {
        s ^= s >> 12, s ^= s << 25, s ^= s >>27;
        return s * 268'5821'6577'3633'8717ULL;
    }
};
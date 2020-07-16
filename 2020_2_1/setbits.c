unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y)
{
        return ((y << (p+1-n)) & (~(~0 << n) << (p+1-n))) ^ (x & ((~(~0 << n) << (p+1-n)) ^ ~0));
}


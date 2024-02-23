#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <stdlib.h>

class BigInteger
{
private:
    unsigned int *v;
    size_t size;
    int sig;
public:
    BigInteger();
    BigInteger(int);
    ~BigInteger();

    void sum(BigInteger);
    void sub(BigInteger);
    void div(BigInteger);
    void mul(BigInteger);
    void pow(BigInteger);
    void pow2(BigInteger, BigInteger);
};

#endif
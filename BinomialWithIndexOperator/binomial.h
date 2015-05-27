#ifndef BINOMIAL_H
#define BINOMIAL_H

#include <cstddef>

class BinomialHelper
{
public:
    // G VI
    BinomialHelper(size_t row): row(row) {}
    BinomialHelper(const BinomialHelper &original) = default;
    BinomialHelper &operator=(const BinomialHelper &rhs) = default;
    BinomialHelper(BinomialHelper &&victim) = default;
    BinomialHelper &operator=(BinomialHelper &&rhs) = default;
    ~BinomialHelper() = default;

    size_t operator[](size_t col);
private:
    size_t row;
};

class Binomial
{
public:
    // G VI
    Binomial() = default;
    Binomial(const Binomial &original) = default;
    Binomial &operator=(const Binomial &rhs) = default;
    Binomial(Binomial &&victim) = default;
    Binomial &operator=(Binomial &&rhs) = default;
    ~Binomial() = default;

    BinomialHelper operator[](size_t row)
    {
        return BinomialHelper(row);
    }
};

#endif // BINOMIAL_H

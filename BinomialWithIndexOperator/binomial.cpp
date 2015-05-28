#include "binomial.h"
#include <algorithm>
#include <cassert>

using namespace std;

size_t gcd(size_t a, size_t b);

size_t BinomialHelper::operator[](size_t col)
{
    assert(col <= row); //элемент кантрактнага праграмавання

    auto minimal = min(col, row - col);
    size_t numerator = 1, denominator = 1;

    for(size_t i = 1; i <= minimal; ++i)
    {
        numerator *= row - i + 1;
        denominator *= i;
        auto devisor = gcd(numerator, denominator);
        numerator /= devisor;
        denominator /= devisor;
    }

    return numerator / denominator;
}

size_t gcd(size_t a, size_t b)
{
    if(b == 0)
        return a;

    while(a % b != 0)
    {
        auto c = a % b;
        a = b;
        b = c;
    }

    return b;
}

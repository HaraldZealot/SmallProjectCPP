#include "binomial.h"
#include <algorithm>
#include <cassert>

using namespace std;

size_t BinomialHelper::operator[](size_t col)
{
    assert(col <= row); //элемент кантрактнага праграмавання

    auto minimal = min(col, row - col);
    size_t numerator = 1, denominator = 1;

    for(size_t i = 1; i <= minimal; ++i)
    {
        numerator *= row - i + 1;
        denominator *= i;
        // тут можна яшчэ дапісаць скараэчэнне дробу, як яшчэ адзін метад барацьбы з перапаўненнем
    }

    return numerator / denominator;
}

#include <iostream>
#include <iomanip>
#include "binomial.h"

using namespace std;

int main()
{
    Binomial b;

    for(size_t n = 0; n <= 10; ++n)
    {
        for(size_t m = 0; m <= n; ++m)
            cout << setw(4) <<b[n][m] << " ";

        cout << endl;
    }

    return 0;
}


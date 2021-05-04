#include "mathExpretions.h"

int main(int argc, char const *argv[])
{
    Number l(10);
    Number r(2);
    Div div(l,r);

    l = 3;
    r = 4;
    Minus minus(l,r);
    
    r = 2;
    Mul mul(minus,r);

    Plus plus(div,mul);

    cout << plus.calculate();
    return 0;
}

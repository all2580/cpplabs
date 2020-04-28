#include "class.h"
#include <iostream>
#include <stdexcept>

using namespace std;






int main() {
    Rational r (106,-16);
    std::cout <<r.getNumerator()<< ' ' << r.getDenominator() << std::endl;


//
//    int e=r.Euclidian(16,8);
//    cout<< e ;


    return 0;
}

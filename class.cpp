#include "class.h"
#include <iostream>
#include <stdexcept>



Rational::Rational(int num , int den){
    int nod= Euclidian (num, den);
    numerator=num/nod;
    denominator=den/nod;

};

int Rational::Euclidian(int a, int b){
    if (b>0) return Euclidian(b,a%b);
    return a ;

};
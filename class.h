#ifndef CLASS_H
#define CLASS_H

#include <stdexcept>
using namespace std;

class Rational{
private:
    int numerator;
    int denominator;

public:
    Rational(int num , int den);


    int getNumerator(){return numerator;}
    int getDenominator(){return denominator;}


    int Euclidian(int a, int b);


};

#endif
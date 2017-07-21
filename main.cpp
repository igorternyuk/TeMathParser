#include <string>
#include <vector>
#include <cmath>
#include <ctype.h>
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include "parser.h"

void test(std::string input, std::vector<std::pair<char, double>> vars)
{
   try
    {
        Parser p(input,vars);
        auto result = p.calculateExpression();
        std::cout.precision(15);
        std::cout << input << " = " << result << std::endl;
    }
   catch (std::exception& e)
    {
        std::cout << input << " : exception: " << e.what() << '\n';
    }
}

int main()
{
     std::vector<std::pair<char, double>> vct;
     std::pair<char, double> px('X', M_PI/6);
     std::pair<char, double> py('Y', 0.5);
     std::pair<char, double> pz('Z', 5);
     std::pair<char, double> pu('U', 2);
     std::pair<char, double> pv('V', 0.7);
     vct.push_back(px);
     vct.push_back(py);
     vct.push_back(pz);
     vct.push_back(pu);
     vct.push_back(pv);
     test("X", vct);
     test("Y", vct);
     test("Z", vct);
     test("G", vct);
     test("sqr(Z)", vct);
     test("sqrt(Z)", vct);
     test("cbrt(Z)", vct);
     test("cube(Z)", vct);
     test("sign(X)", vct);
     test("sign(Y)", vct);
     test("gradtorad(180)", vct);
     test("radtograd(P/4)", vct);
     test("ln(E)", vct);
     test("log2(1024)", vct);
     test("log8(64)", vct);
     test("log16(256)", vct);
     test("log2(1024)", vct);
     test("log10(1000)", vct);
     test("sin(X)", vct);
     test("cos(X)", vct);
     test("tg(X)", vct);
     test("ctg(X)", vct);
     test("secans(X)", vct);
     test("csecans(X)", vct);
     test("arcsin(Y)", vct);
     test("arccos(Y)", vct);
     test("arctg(Y)", vct);
     test("arcctg(Y)", vct);
     test("arcsecans(U)", vct);
     test("arccsecans(U)", vct);
     test("sh(U)", vct);
     test("ch(U)", vct);
     test("th(U)", vct);
     test("cth(U)", vct);
     test("sech(U)", vct);
     test("csech(U)", vct);
     test("arcsh(U)", vct);
     test("arcch(U)", vct);
     test("arcth(V)", vct);
     test("arccth(-3)", vct);
     test("arcsech(U)", vct);
     test("arccsech(0.5)", vct);
     test("X * X + Y * Y", vct);
     //std::cout << " atanh(0) " << atanh(0) << '\n';

    return 0;
}

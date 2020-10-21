#include <iostream>
#include "String.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    String s = ((std::string) ("sssssssq"));
    String s1 = ((std::string) ("sssssssh"));
    s.Out();
    s1.Out();
    std::cout << (s > s1) << "\n\n";
    String s2("ppppp");
    String s3("ppppp");
    s2.Out();
    s3.Out();
    std::cout << (s2 > s3) << "\n\n";
    String s4("xxxxy");
    String s5("xxxxx");
    s4.Out();
    s5.Out();
    std::cout << (s4 > s5) << "\n\n";
    s4 = (std::string)("motor");
    s5 = (std::string)("mator");
    s4.Out();
    s5.Out();
    std::cout << (s4 > s5) << "\n\n";
    system("pause");
}
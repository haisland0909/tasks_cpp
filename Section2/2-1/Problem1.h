#ifndef SECTION2_PROBLEM1_CLASS_
#define SECTION2_PROBLEM1_CLASS_
#include"../Common/Section2.h"
class Problem1 
    : public Problem<int> {
public:
    Problem1(int size);
    virtual void execute();
};

Problem1::Problem1(int size) : Problem<int>(size){};

void Problem1::execute() {
    int no1 = inputs[0].get();
    int no2 = inputs[1].get();
    int rate = no1 * 100 / no2;
    ans = "";
    ans += std::to_string(no1);
    ans += "ÇÕ";
    ans += std::to_string(no2);
    ans += "ÇÃ";
    ans += std::to_string(rate);
    ans += "%Ç≈Ç∑ÅB";
}
#endif
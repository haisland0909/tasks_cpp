#ifndef SECTION2_PROBLEM5_CLASS_
#define SECTION2_PROBLEM5_CLASS_
#include"../Common/Section2.h"
class Problem5
    : public Problem<int> {
public:
    Problem5(int size);
    virtual void execute();
};

Problem5::Problem5(int size) : Problem<int>(size){};

void Problem5::execute() {
    int no1 = inputs[0].get();
    int no2 = inputs[1].get();
    double rate = no1 * 100 / no2;
    ans = "";
    ans += std::to_string(no1);
    ans += "ÇÕ";
    ans += std::to_string(no2);
    ans += "ÇÃ";
    ans += std::to_string(rate);
    ans += "%Ç≈Ç∑ÅB";
}
#endif
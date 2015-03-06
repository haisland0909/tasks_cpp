#ifndef SECTION2_PROBLEM6_CLASS_
#define SECTION2_PROBLEM6_CLASS_
#include"../Common/Section2.h"
class Problem6
    : public Problem<int> {
public:
    Problem6(int size);
    virtual void execute();
};

Problem6::Problem6(int size) : Problem<int>(size){};

void Problem6::execute() {
    int no1 = inputs[0].get();
    double rate = (no1 - 100) * 0.9;
    ans = "";
    ans += std::to_string(no1);
    ans += "cmÇÃïWèÄëÃèdÇÕ";
    ans += std::to_string(rate);
    ans += "kgÇ≈Ç∑ÅB";
}
#endif
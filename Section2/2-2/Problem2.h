#ifndef SECTION2_PROBLEM2_CLASS_
#define SECTION2_PROBLEM2_CLASS_
#include"../Common/Section2.h"
class Problem2
    : public Problem<int> {
public:
    Problem2(int size);
    virtual void execute();
};

Problem2::Problem2(int size) : Problem<int>(size){};

void Problem2::execute() {
    int no1 = inputs[0].get();
    int no2 = inputs[1].get();
    int sum = no1 + no2;
    int multi = no1 * no2;
    ans = "";
    ans += std::to_string(no1);
    ans += "Ç∆";
    ans += std::to_string(no2);
    ans += "ÇÃòaÇÕ";
    ans += std::to_string(sum);
    ans += "Ç≈êœÇÕ";
    ans += std::to_string(multi);
    ans += "Ç≈Ç∑ÅB";
}
#endif
#ifndef SECTION2_PROBLEM3_CLASS_
#define SECTION2_PROBLEM3_CLASS_
#include"../Common/Section2.h"
class Problem3
    : public Problem<double> {
public:
    Problem3(int size);
    virtual void execute();
};

Problem3::Problem3(int size) : Problem<double>(size){};

void Problem3::execute() {
    double no1 = inputs[0].get();
    ans = "";
    ans += std::to_string(no1);
    ans += "Ç≈Ç∑ÅB";
}
#endif
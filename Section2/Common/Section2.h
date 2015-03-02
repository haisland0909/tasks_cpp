#ifndef SECTION2_PROBLEM_CLASS_
#define SECTION2_PROBLEM_CLASS_
#include <iostream>
#include <string>
#include "InputTemplate.h"

template<typename T = int> class Problem {
protected:
    T* inputs;
    int size;
    string ans;

public:
    Problem(int size);
    virtual ~Problem();
    void setValues();
    virtual void execute() = 0 const;
    void show() const;

};
// ���������I�m��
template <typename T> Problem<T>::Problem(int size) {
    inputs = new T[size];
    size = size;
}
// ���������
template <typename T> Problem<T>::~Problem(){
    delete inputs;
}
// �l�̃Z�b�g
template <typename T> Problem<T>::setValues(){
    for (size_t i = 0; i < size; i++)
    {
        while (input[i].set)
        {
            ;
        }

    }
}
// ������\��
template <typename T> Problem<T>::show(){
    std::cout << ans << std::endl;
}

#endif
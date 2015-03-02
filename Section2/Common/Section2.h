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
// メモリ動的確保
template <typename T> Problem<T>::Problem(int size) {
    inputs = new T[size];
    size = size;
}
// メモリ解放
template <typename T> Problem<T>::~Problem(){
    delete inputs;
}
// 値のセット
template <typename T> Problem<T>::setValues(){
    for (size_t i = 0; i < size; i++)
    {
        while (input[i].set)
        {
            ;
        }

    }
}
// 答えを表示
template <typename T> Problem<T>::show(){
    std::cout << ans << std::endl;
}

#endif
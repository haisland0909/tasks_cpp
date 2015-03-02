#ifndef SECTION2_PROBLEM_CLASS_
#define SECTION2_PROBLEM_CLASS_
#include <iostream>
#include <fstream>
#include <string>
#include "InputTemplate.h"

template<typename T = int> class Problem {
protected:
    Input<T>* inputs;
    int c_size;
    std::string ans;
    void setValues();
    void show();
    int readTask();
    virtual void execute() = 0;

public:
    Problem(int size);
    virtual ~Problem();
    void doProblem();
    

};

// メモリ動的確保
template <typename T> Problem<T>::Problem(int size) {
    inputs = new Input<T>[size];
    c_size = size;
}
// メモリ解放
template <typename T> Problem<T>::~Problem(){
    delete inputs;
}
// 値のセット
template <typename T> void Problem<T>::setValues(){
    for (int i = 0; i < c_size; i++)
    {
        while (inputs[i].set())
        {
            ;
        }

    }
}
// 答えを表示
template <typename T> void Problem<T>::show(){
    std::cout << ans << std::endl;
}

template <typename T> void Problem<T>::doProblem(){
    readTask();
    setValues();
    execute();
    show();
}

template <typename T> int Problem<T>::readTask(){
    std::ifstream ifs("task.txt");
    std::string str;
    if (ifs.fail())
    {
        std::cerr << "失敗" << std::endl;

        return -1;
    }
    while (getline(ifs, str))
    {
        std::cout << str << std::endl;
    }

    return 0;
}

#endif
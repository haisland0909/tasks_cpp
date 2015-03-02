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

// ���������I�m��
template <typename T> Problem<T>::Problem(int size) {
    inputs = new Input<T>[size];
    c_size = size;
}
// ���������
template <typename T> Problem<T>::~Problem(){
    delete inputs;
}
// �l�̃Z�b�g
template <typename T> void Problem<T>::setValues(){
    for (int i = 0; i < c_size; i++)
    {
        while (inputs[i].set())
        {
            ;
        }

    }
}
// ������\��
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
        std::cerr << "���s" << std::endl;

        return -1;
    }
    while (getline(ifs, str))
    {
        std::cout << str << std::endl;
    }

    return 0;
}

#endif
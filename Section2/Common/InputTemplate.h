#ifndef SECTION2_INPUT_CLASS_
#define SECTION2_INPUT_CLASS_
#include <iostream>
#include <typeinfo>

enum type {
    INT,
    DOUBLE,
    OTHER
};

template<typename T = int> class Input {
private:
    T value;
    
    type checkType();

public:
    bool set();
    T get();

};

template <typename T> type Input<T>::checkType() {
    if (typeid(int) == typeid(value)) {

        return INT;
    }
    if (typeid(double) == typeid(value)) {

        return DOUBLE;
    }

    return OTHER;
}

template <typename T> T Input<T>::get() {
    return value;
}

template <typename T> bool Input<T>::set()  {
    switch (checkType()) {
        case INT:
            std::cout << "������";
            break;

        case DOUBLE:
            std::cout << "������";
            break;

    }
    std::cout << "���͂��Ă�������" << std::endl;
    std::cin >> value;

    return value == 0;
}


#endif

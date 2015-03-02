#ifndef SECTION2_INPUT_CLASS_
#define SECTION2_INPUT_CLASS_
#include <iostream>
#include <typeinfo>

template<typename T = int> class Input {
private:
    T value;
    enum type {
        INT,
        DOUBLE,
        OTHER
    };
    type checkType() const;

public:
    void set();
    T get() const;

};

template <typename T> type Input<T>::checkType() const {
    if (typeid(int) == typeid(value)) {

        return INT;
    }
    if (typeid(double) == typeid(value)) {

        return DOUBLE;
    }

    return OTHER;
}

template <typename T> T Input<T>::get() const {
    return value;
}

template <typename T> bool Input<T>::set()  {
    swicth(checkType()){
        case INT:
            std::cout << "®”‚ð";
            break;

        case DOUBLE:
            std::cout << "ŽÀ”‚ð";
            break;

    }
    std::cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
    std::cin >> value;

    return value > 0 || value < 0;
}


#endif

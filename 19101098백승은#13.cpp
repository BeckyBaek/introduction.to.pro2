#include <iostream>
#include <cmath> 
template <typename T, typename V>
auto subtraction(const T&a, const V& b) -> decltype(std::abs(a - b)) {

    return std::abs(a-b);
}

int main(){
    std::cout<< "Absolute value of (10-20) is " << subtraction (10,20)<<std::endl;
    std::cout<< "Absolute value of (5.5-3.1) is "<< subtraction(5.5, 3.1) << std::endl;
    return 0;

}




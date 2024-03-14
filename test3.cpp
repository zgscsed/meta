#include <iostream>
#include <concepts>

// 如果std::is_integral<T>::value 值为false, type没有定义，使用的时候编译器会报错， 技巧
template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
foo(T value) {
    // 只有当 T 是整型时，该函数才会被匹配并实例化
}

// 概念使用例子
// 1. 概念的定义
template <typename T>
concept Integral = std::is_integral<T>::value;

// 2. 概念的使用
template <Integral T>
T add(T a, T b)
{
    return a + b;
}

// 3. 概念的约束
template <typename T>
requires Integral<T>
T add2(T a, T b)
{
    return a + b;
}

// requires 关键字的使用
template <typename T>
T add3(T a, T b) requires Integral<T>
{
    return a + b;
}

int main(void)
{
    int a = 1, b = 2;
    double c = 1.1, d = 2.2;
    add2(a, b);
    // add2(c, d); // 编译错误
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
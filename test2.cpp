#include <iostream>

// 模板中使用auto例子
template <typename T>
auto add(T a, T b) -> decltype(a + b)
{
    return a + b;
}

// 简化模板中的auto使用
auto add2(auto &a, auto &b)
{
    return a + b;
}

template <typename T>
decltype(auto) add3(const T& a, const T& b)
{
    return a;
}

// constexpr 例子

int main2(void)
{
    int a = 2;
    int b = 3;
    add2(a, b);
    auto c = add3(a, b);
    std::cout << "Hello World!" << std::endl;
    return 0;
}
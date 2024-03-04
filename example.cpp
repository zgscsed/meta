#include "example.hpp"

int TestTemplateInstantiation()
{
    int a = 1;
    int b = 2;
    double c = 1.1;
    double d = 2.2;
    std::cout << add(a, b) << std::endl; // 隐式实例化
    std::cout << add(c, d) << std::endl; // 隐式实例化
    std::cout << add<double>(a, b) << std::endl; // 显式实例化
    std::cout << add<int>(c, d) << std::endl; // 显式实例化

    MyClass<int> t(1, 2);
    std::cout << t.add() << std::endl;
    MyClass<double> t2(1.1, 2.2);
    std::cout << t2.add() << std::endl;

    print(a, c);

    // 模板参数默认值
    std::cout << "默认值： " << add2(a) << std::endl;
    return 0;
}

int testClassTemplatePara()
{   
    const size_t N=10;

    Container<int, N, MyArray> container;
    container.Append(1);
    container.Append(2);
    int *p=container.Begin();
    while(p!=container.End())
         std::cout<<*p++<<std::endl;
    return 0;
}

//void printSpecia(int a, int b)
//{
//    std::cout << "普通函数" << std::endl;
//    std::cout << "a: " << a << " b: " << b << std::endl;
//}
void TestTemplateSpecialization()
{
    int a = 1;
    int b = 2;
    char c = 'a';
    printSpecia(a, b);
    printSpecia(a, c);

    std::cout <<"factorial(5): "<< factorial<5>() << std::endl;
}

void TestClassTemplateSpecialization()
{
    Data<double, int> d1; // 调用特化的int版本
    Data<int, double> d2; // 调用基础的模板
    Data<int*, int*> d3; // 调用特化的指针版本
    Data<int&, int&> d4(1, 2); // 调用特化的指针版本
}
/*
 * Copyright (C) 2024 zgscsed. All rights reserved.
 * @filename: file name
 * @Author: zgscsed
 * @Date: 2024-02-07 20:33:00
 * @LastEditors: zgscsed
 * @LastEditTime: 2024-02-11 18:44:17
 * @Description: file content
 */
#ifndef TESTTEMPLATE_HPP_
#define TESTTEMPLATE_HPP_

#include <iostream>

// 加法模板函数
template <typename T>
T add(T a, T b)
{
    return a + b;
}

// 模板显示实例化声明
// template int add<int>(int a, int b);
// template double add<double>(double a, double b);

// 类模板显示实例化声明
// template class MyClass<int>;

// 类模板语法例子
template <class T>
class MyClass
{
public:
    MyClass(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add()
    {
        return a + b;
    }
    T a;
    T b;
};


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
    return 0;
}

// 类模板特化
template <class T>
class MyClass2
{
public:
    MyClass2(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add()
    {
        return a + b;
    }
    T a;
    T b;
};

template <>
class MyClass2<int>
{
public:
    MyClass2(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        return a + b;
    }
    int a;
    int b;
};

#endif /* TESTTEMPLATE_HPP_ */

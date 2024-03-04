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

// 函数模板语法例子，多个类型参数
template <class T, class U>
void print(T a, U b)
{
    std::cout << "a: " << a << " b: " << b << std::endl;
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

// 模板实现一个stack类
template <class T>
class Stack
{
private:
    T elements[10];
    int size;
public:
    Stack()
    {
        size = 0;
    }
    void Push(T element)
    {
        elements[size++] = element;
    }
    T Pop()
    {
        return elements[--size];
    }
    bool IsEmpty();
    int GetSize()
    {
        return size;
    }
};

// 类外定义成员函数
template <class T>
bool Stack<T>::IsEmpty()
{
    return size == 0;
}

// 模板参数的默认值
template <class T = int>
class Stack2
{
    T elements[10];
    int size;
public:
    Stack2()
    {
        size = 0;
    }
    void Push(T element)
    {
        elements[size++] = element;
    }
    T Pop()
    {
        return elements[--size];
    }
    bool IsEmpty();
    int GetSize()
    {
        return size;
    }
};

// 模板参数 非类型参数
template <class T, size_t size>
class MyArray{
    T data[size]; 
    size_t count;                 //数组元素个数
public:
    MyArray(){count=0;}         //构造函数
    void PushBack(const T& t) 
    {  if(count<size)  data[count++]=t;  }
    void PopBack()    { if(count>0)  - -count; }
    T* Begin(){return data;}      
    T* End(){return data+count;} 
};

//声明Container类模板，
//它有 模板类 参数
template <class T, size_t size, template <class, size_t> class Seq>
class Container{
    Seq<T, size> seq;
public:
    void Append(const T& t){ seq.PushBack(t);}
    T* Begin(){return seq.Begin();}
    T* End(){return seq.End();}
};


// 函数参数默认值
template <class T>
T add2(T a, int b = 10)
{
    return a + b;
}

#endif /* TESTTEMPLATE_HPP_ */

#ifndef TEST_TEMPLATE_SPECIALIZATION_HPP_
#define TEST_TEMPLATE_SPECIALIZATION_HPP_

#include <iostream>

// 函数模板偏特化
template <class T, class N>
void printSpecia(T a, N b)
{
    std::cout << "标准模板函数" << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
}

// template<>
// void printSpecia(int& a, double& b)
// {
//     std::cout << "特化模板函数" << std::endl;
//     std::cout << "a: " << a << " b: " << b << std::endl;
// }

 //template<class T>
 //void printSpecia(T a, int b)
 //{
 //    std::cout << "偏特化模板函数" << std::endl;
 //    std::cout << "a: " << a << " b: " << b << std::endl;
 //}

//template <typename T>
//void printSpecia<T, char>(T a, char b) {
//	std::cout << "偏特化模板函数1" << std::endl;
//}

// 类模板特化例子

template<class T1, class T2>
class Data
{
public:
	Data() { std::cout << "Data<T1, T2>" << std::endl; }
private:
	T1 _d1;
	T2 _d2;
};

// 将第二个参数特化为int
template <class T1>
class Data<T1, int>
{
public:
	Data() { std::cout << "Data<T1, int>" << std::endl; }
private:
	T1 _d1;
	int _d2;
};

//两个参数偏特化为指针类型
template <typename T1, typename T2>
class Data <T1*, T2*>
{
public:
	Data() { std::cout << "Data<T1*, T2*>" << std::endl; }
private:
	T1 _d1;
	T2 _d2;
};

//两个参数偏特化为引用类型
template <typename T1, typename T2>
class Data <T1&, T2&>
{
public:
	Data(const T1& d1, const T2& d2) : _d1(d1), _d2(d2)
	{
		std::cout << "Data<T1&, T2&>" << std::endl;
	}
private:
	const T1& _d1;
	const T2& _d2;
};


// 利用函数模板完全特化实现递归展开
template<int N>
int factorial() {
    return N * factorial<N-1>();
}

template<>
int factorial<0>();

#endif // !TEST_TEMPLATE_SPECIALIZATION_HPP_
/*
 * Copyright (C) 2024 zgscsed. All rights reserved.
 * @filename: file name
 * @Author: zgscsed
 * @Date: 2024-02-07 20:33:00
 * @LastEditors: zgscsed
 * @LastEditTime: 2024-02-08 21:11:10
 * @Description: file content
 */
#include <iostream>
#include "example.hpp"

int main1(void)
{
    TestTemplateInstantiation();
    TestTemplateSpecialization();
    TestClassTemplateSpecialization();
    std::cout << "Hello World!" << std::endl;
    return 0;
}
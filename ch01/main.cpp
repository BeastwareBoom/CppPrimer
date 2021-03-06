﻿#include <iostream>
#include <string.h>

//using namespace std;

struct X
{
    virtual void foo()/*=0*/;
};
struct Y : X
{
    void foo() {}
};
struct A
{
    virtual ~A() = 0;
};
struct B: A
{
    virtual ~B(){}
};
//decleration only,see https://www.tutorialspoint.com/What-is-the-difference-between-a-definition-and-a-declaration-in-Cplusplus
extern int x;
void foo();
int main()
{
    x = 0;//变量声明，去掉extern可解决
//    foo();//只声明，未定义，定义可解决
//    Y y;//X中foo声明为纯虚方法可解决
//    B b;//A中析构函数，空实现可解决
}

/* auto generated MAIN by live template */
int main_aux_source_directory(int argc, char *argv[]) {
    std::cout<<"aux_source_directory command"<<std::endl;
    return EXIT_SUCCESS;
}

int main_const() {
    double di = 3.14;
//    const int &refi = di;

    const int a = 1;
    const int *aptr = &a;//aptr must be const
//    int *aptr2 = &a;//error,a is const
//    *aptr=2;// error,read-only a

    int b=1,*bptr = &b;
    //从右往左读，首先是const类型，然后为int类型指针
    const int *const acptr = &a;
//    acptr = bptr;//error


    return EXIT_SUCCESS;
}

int main_data_type() {

    unsigned char c1 = 255;
    signed char c2 = -128;
    std::cout << "c1=" << c1 << std::endl;
    std::cout << "c2=" << c2 << std::endl;

    const char *u8str = u8"aaa";//utf-8字符串字面值

    std::string str = u8"sss";


    return EXIT_SUCCESS;
}

//indeterminate input
int main_in() {
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }

    //Ctrl+D for output
    std::cout << "sum=" << sum << std::endl;
    return EXIT_SUCCESS;
}

int main_stream() {

    int v1 = 0, v2 = 0;
    //string literal
    std::cout << "Please input the numbers:" << std::endl;
    std::cin >> v1 >> v2;
//    std::cout<<"Please input the second num:"<<std::endl;
//    std::cin>>v2;

    std::cout << "Numbers are: " << v1 << "," << v2 << std::endl;

    return EXIT_SUCCESS;
#if false
    std::cout << "Hello, World!" << std::endl;
    std::cerr << "Hello, cerr!" << std::endl;
    std::clog << "Hello, clog!" << std::endl;
    return EXIT_SUCCESS;//0
//    return EXIT_FAILURE;//1
//    return -1;

#endif
}
// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//void chapter1();
void chapter2();
void chapter3();
void chapter4();

int main()
{
    //chapter1();
    //chapter2();
    //chapter3();
    chapter4();
}

std::string global_str;
int global_int;
int _global_x;

void chapter4() {
    // int* ip, i, & r = i;
    // std::cout << r << std::endl; //-858993460

    // int i,* ip = 0;// * ip 给ip 赋值 必须是引用
    int i,* ip = &i;// * ip 给ip 赋值 必须是引用
    std::cout << i << std::endl; //0
    std::cout << ip << std::endl; //xxx地址

    const int buf; // const 修饰 必须初始化
    int cnt = 0;
    const int sz = cnt;
    ++cnt; ++sz; // const 修饰 sz 不可变
}

void chapter3() {

    // int& i = 123; //初始值必须是左值，也就是变量
    int ival = 1.01;
    int& rval2 = ival;
    // int& rval1 = 1.01; //不能是double类型 必须是左值
    // int& rval3; // 必须初始化

    int i, & ri = i;
    std::cout << ri << std::endl;
    std::cout << &ri << std::endl;
    i = 5;
    ri = 10;
    ri = 1;

    std::cout << i << std::endl;

    int* p1 = nullptr;
    int* p2 = 0;

    int x = 100;
    int& xr = x;
    int& xx = xr;
    //int& xxx = &xx; // error , 引用不能给引用赋值，
    int* xxxp = &xx;
    // int* xxxpp = xx; // error
    std::cout << xr << std::endl;
    std::cout << xx << std::endl;
    std::cout << *xxxp << std::endl;


    int sum = 100, qty = 1;
    int* sumprt = &sum;
    *sumprt = 111;
    std::cout << *sumprt << std::endl;
    sumprt = &qty;
    *sumprt = 2;
    std::cout << *sumprt << std::endl;

    std::cout << "2.20" << std::endl;
    int m = 42, * mprt = &m;
    *mprt = *mprt * *mprt;
    std::cout << *mprt << std::endl;

    // double* sumprtd = &sum; // 类型必须要一致
    // int* sprt = sum; // 类型必须是引用 不能是值
    int* p = &sum;

    // 判断的是p是否为空指针，指针是否有值
    if (p) {
    }  
    // 这里的* 是解指针，*p 是指向对象的值
    if (*p) {
    }

    // void* vsum = &sum; // ok, void 可以指向任意类型
    // long* lsum = &sum; // error, 类型不一致

    // int& t; // 声明时就必须初始化
    // t = sum;

    
}

void chapter2() {

   // std::cin >> int input_value;
    // int i = {3.14}; // ide不报错，编译时会报错
    // double salary = wage = 9999.99; // wage 没有定义 ide报错
    int i = 3.14;
    std::cout << i << std::endl;

    int local_int;
    std::string local_str;

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;
    //std::cout << local_int << std::endl;  //没有初始化就使用 会报错 ide不会报错，编译时报错
    std::cout << local_str << std::endl;

    // extern double pi = 3.1415; // 定义 如果有初始化 ide报错

    // extern double pi; // ide 不报错，编译时报错
     // pi = 3.1415;
    // std::cout << pi << std::endl;

    // extern int ix = 1024;

    int _a = 123;
    int $a = 123;
    std::cout << $a << std::endl;

    int a__x = 111;
    std::cout << a__x << std::endl;
    std::cout << _global_x << std::endl;

    int _ = 123888;
    std::cout << _ << std::endl;
    // int double = 1;
    // int catch = 22;
    // int 1_or_2 = 12;
    double Double = 3.1415;
    std::cout << Double << std::endl; // C++ 是允许的

    // int i = 100, sum = 0; //ide 不报错 编译期报错
    for (int i = 0; i < 100;i++) {
        std::cout << i << std::endl;
    }
}


void chapter1() {
    std::cout << "Hello World!\n";

    long double ld = 3.1415;
    int a = ld, b = ld;
    //int c(ld), d = ld;
    std::cout << b << std::endl;

    unsigned u = 10;
    int u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    unsigned i = 10;
    int i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;



    /*
     *   hello

     a = 2;
     b = 3;
    */
    std::cout << "/*";
    std::cout << "*/";
    // std::cout <<  /* "*/" */;

    int sum = 0;
    for (int i = -100; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;

    std::cout <<  /* "*/"  /* "/*" */;

}
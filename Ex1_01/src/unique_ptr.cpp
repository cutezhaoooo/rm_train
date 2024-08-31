#include <iostream>
#include <memory>
#include <string.h>

using namespace std;

/*
    unique_ptr<T>对象指向了唯一的一个对象 ， 所以它独享这个对象的所有权
    当unique_ptr<T>对象析构时，它所指向的对象也析构了
    当不需要使用多个只能指针，想独享对象的所有权时可以选择这种类型的智能指针

    当一个对象被一个 unique_ptr<T>指向时 也可以通过生成一个原生指针来访问对象
*/

int main()
{
    // unique_ptr 没有copy构造函数，不支持普通的拷贝和赋值操作
    

    // std::unique_ptr<string>  实例化std::unique_ptr类
    // {new std::string ("Algernon")} 创建一个新的std::string对象 立即用字符串Algernon来初始化它 
    // 这个新创建的对象分配到堆上而不是栈上
    std::unique_ptr<std::string> pname{new std::string ("Algernon")};
    
    // 更好地 生成的unique_ptr<T>对象的方式是使用make_unique<T>()函数
    auto pname2=make_unique<string>("Algeron");

    // 可以生成一个指向数组的unique_ptr对象
    // size_t类型的len初始化为10
    size_t len{10};
    unique_ptr<int[]> pnumbers {new int[len]};

    // 使用make_unique
    // std::make_unique

    // 大小

    // 赋值

    // 可以把array当成C-Style Array
    std::array<char,41> a;  // create static array of 41 chars
    // 第一个参数传入 目标字符串的地址 第二个参数 原字符串
    // strcpy(&a[0],"hello world");
    // strcpy(a.data(),"hello world");
    // strcpy(a,"hello");

    // char * b=new char[41];
    // strcpy(&b[0],"hello world");

    // 不要用迭代器表现 第一元素的地址
    // printf("%s\n",a.begin());   // 可能出问题
    printf("%s\n",a.data());   // 没有问题


    return 0;
}
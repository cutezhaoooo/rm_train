#include <array>
#include <string>
using namespace std;

/*
    array是一个有序集合
    Array的迭代器属于随机访问
*/

int main()
{
    // ================ init ==================
    // array 无任何东西别指定为初值时，会被预初始化
    // 对于基础类型 初值可能不明确(可能不是0)
    std::array<int,4> x;  // x 有未知的值

    // 可以提供空白初始列 保证所有元素被初始化
    std::array<int,4> x2={};  // 0 0 0 0

    // ============== swap 和 move =================
    array<std::string,10> as1,as2;

    // iterator和reference指向原本容器

    return 0;
}
#include <vector>
#include <iostream>

using namespace std;

/*
    vector是一个有序集合
*/

// 大小和容量
// vector会分配出较其容纳的元素更多的内存 
// vector提供用于操作大小的函数 size empty max_size
// capavity() 返回vector实际能够容纳的元素量

// ****=================****
// 一旦vector的内存重新分配 vector元素相关的所有reference pointer iterator都会失效
// 内存分配很耗费时间


// 可以使用reserve保留适当容量 

template <typename T>
void shrinkCapacity(std::vector<T> &v)
{
    std::vector<T> tmp(v);  // 
    // ** ================ **
    // swap之后原先所有的reference pointer iterator都指向原本的位置
    v.swap(tmp);
}

int main()
{
    std::vector<int> v;  // 创建一个空vector
    v.reserve(80);

    // 初始化期间就向构造函数传递额外实参 构建足够的空间
    // std::vector<T> v(5);

    // vector 不能使用reserve缩减容量 
    // 所以删除元素 reference pointer pointer仍然有效
    // 但是插入元素可能会使 reference pointer pointer失效
    // 安插可能会使vector重新分配
    // C++11 引入新函数 可以缩减容量以符合当前的元素
    cout<<"v能容纳的元素量为"<<v.capacity()<<endl;
    cout<<"v容纳的元素量为"<<v.size()<<endl;
    v.shrink_to_fit();
    cout<<"v能容纳的元素量为"<<v.capacity()<<endl;
    cout<<"v容纳的元素量为"<<v.size()<<endl;
    
    // ===== 赋值 ==========
    


    return 0;
}
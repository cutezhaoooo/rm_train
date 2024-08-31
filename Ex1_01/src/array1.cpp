#include <array>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main()
{
    array<int,10> a={11,22,33,44};

    // modify last two elements
    a.back()=9999999;
    a[a.size()-2]=42;
    

    return 0;
}
#include <iostream>

int main() {
    std::string x, y, z;
    std::cin >> x >> y >> z;
    
    // 问题1：x、y、z三个变量中各取1个字符组合成新字符电的组合数量
    int total_combinations_1 = x.size() * y.size() * z.size();
    
    // 问题2：x、y、z每2个变量中各取1个字符组合成新字符毕的组合数量
    int total_combinations_2 = x.size() * y.size() + x.size() * z.size() + y.size() * z.size();
    
    std::cout << total_combinations_1 << std::endl;
    std::cout << total_combinations_2 << std::endl;
    
    return 0;
}

#include <iostream>

class Solution
{
private:
    short a_{0},b_{0}, c_{0};
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> a_ >> b_ >> c_;
}

void Solution::result(){
    std::cout << std::min(a_ - b_ * c_, a_ - b_ -c_);
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

#include <iostream>

class Solution
{
private:
    short n_{0},k_{0};
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> n_ >> k_;
}

void Solution::result(){
    n_ <= k_ ? std::cout << 2 : (n_*2%k_==0) ? std::cout << n_*2/k_ : std::cout << n_*2/k_+1;
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

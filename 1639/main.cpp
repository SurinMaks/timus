#include <iostream>

class Solution
{
private:
    short m_{0}, n_{0};
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> m_ >> n_;
}

void Solution::result(){
    ( (m_*n_) % 2)? std::cout << "[second]=:]" : std::cout << "[:=[first]";
}



int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();

}
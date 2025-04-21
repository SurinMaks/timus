#include <iostream>
#include <memory>

class Solution
{
private:
    unsigned short m1yk_{0}, m2yk_{0};
    unsigned short m1yyk_{0}, m2k_{0};
    unsigned short m1k_{0}, m2yyk_{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> m1yk_ >> m2yk_ >> m1yyk_ >> m2k_ >> m1k_ >> m2yyk_;
}

void Solution::result(){
    std::cout << m1yk_ - m1k_ << ' ' << m2yk_ - m2k_;
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

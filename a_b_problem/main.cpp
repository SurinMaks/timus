#include <iostream>
#include <memory>

class Solution
{
private:
    int a_{0};
    int b_{0};
public:
    Solution() = default;
    ~Solution() = default;
    int add();
    void input();
};

void Solution::input(){
    std::cin >> a_ >> b_;
}

int Solution::add(){
    return a_ + b_;
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    std::cout << solution->add()<<'\n';
}
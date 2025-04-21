#include <iostream>
#include <memory>

class Solution
{
private:
    short N_{0}, A_{0}, B_{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> N_ >> A_ >> B_;
}

void Solution::result(){
    std::cout << N_ *  ((A_ * B_) * 2);
}

int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}
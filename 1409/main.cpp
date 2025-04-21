#include <iostream>
#include <memory>

class Solution
{
private:
    int garry_{0};
    int larry_{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> garry_ >> larry_;
};

void Solution::result(){
    std::cout << (garry_ + larry_ - 1) - garry_ << ' ' << (garry_ + larry_ - 1) - larry_;
};


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

#include <iostream>
#include <memory>

class Solution
{
private:
    int n_{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> n_;
}

void Solution::result(){
    int result{0};
    if(n_ > 0){
        result = n_ * (n_ + 1) / 2;
    }
    else{
        result = 1 + n_ * (-n_ + 1) / 2;
    }
    std::cout << result;
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

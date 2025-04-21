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
    int next{1};
    int result{1};
    if(n_ > 0){
        while (next != n_)
        {
            result = result + ++next;
        }
    }
    else{
        while (next != n_)
        {
            result = result + --next;
        }
    }
    std::cout << result;
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

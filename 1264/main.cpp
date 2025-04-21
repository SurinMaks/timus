#include <iostream>
#include <memory>

class Solution
{
private:
unsigned short N{0}, M{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> N >> M;
}

void Solution::result(){
    std::cout << N * (M + 1);
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

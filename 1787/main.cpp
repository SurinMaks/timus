#include <iostream>
#include <memory>
#include <vector>

class Solution
{
private:
    short k_{0}, n_{0};
    std::vector<short> values;
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> k_ >> n_;
    short temp{0};
    for(short i=0; i<n_; ++i){
        std::cin >> temp;
        values.emplace_back(temp);
    }
}

void Solution::result(){
    short count{0};
    for(short i=1; i<=n_; ++i){
        count = values[i-1] - k_;
        if (count > 0){
            values[i] += count;
        }
    }
    if(count < 0){
        count = 0;
    }
    std::cout << count;
}


int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}

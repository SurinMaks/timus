#include <iostream>
#include <vector>

class Solution
{
private:
    short n_{0};
    std::vector<int> power_;
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> n_;
    power_.resize(n_);
    for(auto& el : power_){
        std::cin >> el;
    }
}

void Solution::result(){
    int max_power{0};
    short position{0};
    int temp{0};
    for(int i=1; i<n_ - 1; ++i){
        temp =power_[i-1] + power_[i] + power_[i+1];
        if(max_power < temp){
            max_power = temp;
            position = i + 1;
        }
    }
    std::cout << max_power << ' ' << position;
}

int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

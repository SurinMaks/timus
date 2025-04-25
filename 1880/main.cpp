#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
private:
    int n_{0};
    std::vector<int> block1;
    std::vector<int> block2;
    std::vector<int> block3;
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> n_;
    block1.resize(n_);
    for(auto& el : block1){
        std::cin >> el;
    }

    std::cin >> n_;
    block2.resize(n_);
    for(auto& el : block2){
        std::cin >> el;
    }

    std::cin >> n_;
    block3.resize(n_);
    for(auto& el : block3){
        std::cin >> el;
    }
}

void Solution::result(){
    std::vector<int> temp;
    std::set_intersection(
                            block1.begin(), block1.end(),
                            block2.begin(), block2.end(),
                            std::back_inserter(temp)
    );

    std::vector<int> result;
    std::set_intersection(
                            temp.begin(), temp.end(),
                            block3.begin(), block3.end(),
                            std::back_inserter(result)
    );
    std::cout << result.size();
}



int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

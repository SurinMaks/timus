#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
class Solution
{
private:
    int n_{0};
    std::vector<long int> positions_;
public:
    void intput();
    void result();
};

void Solution::intput(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::cin >> n_;
    positions_.resize(n_);
    for(auto& position : positions_){
        std::cin >> position;
    }
}

void Solution::result(){
    std::vector<char> res;
    for(auto& position : positions_){
        long long D = 1 + 8LL * (position - 1);
        long long sqrt_D = sqrt(D);
        if(sqrt_D * sqrt_D != D){
            res.push_back('0');
            continue;
        }
        long long k = (-1 + sqrt_D) / 2;
        if (k >= 0 && (k * (k + 1)) / 2 + 1 == position) {
            res.push_back('1');
        } else {
            res.push_back('0');
        }
    }

    for (size_t i = 0; i < res.size(); ++i) {
        if (i != 0) {
            std::cout << ' ';
        }
        std::cout << res[i];
    }

}

int main(int, char**){
    Solution solution;
    solution.intput();
    solution.result();
}

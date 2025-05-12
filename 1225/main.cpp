#include <iostream>
#include <vector>

namespace ex1225{

    class Solution
    {
        private:
            unsigned int n_{0};
            std::vector<unsigned long long> res_;
        public:
            void input();
            void result();
    };

    void Solution::input(){
        std::cin >> n_;
    }

    void Solution::result(){
        res_.resize(n_);
        res_[0] = 2;
        res_[1] = 2;
        for(size_t i = 2; i < n_; ++i){
            res_[i] = res_[i-1] + res_[i-2];
        }
        std::cout << res_[n_-1];
    }

}

int main(int, char**){
    ex1225::Solution solution;
    solution.input();
    solution.result();
}

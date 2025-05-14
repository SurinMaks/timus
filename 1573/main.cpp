#include <iostream>
#include <map>
#include <vector>
namespace ex1573{
    class Solution
    {
        private:
            int B_{0}, R_{0}, Y_{0}, K_{0};
            std::map<std::string, int> colorCount_ = {
                {"Blue", B_},
                {"Red", R_},
                {"Yellow", Y_}
            };
            std::vector<std::string> colors_;
        public:
        void input();
        void result();
    };

    void Solution::input(){
        std::cin >> B_ >> R_ >> Y_ >> K_;
        colorCount_["Blue"] = B_;
        colorCount_["Red"] = R_;
        colorCount_["Yellow"] = Y_;
        colors_.resize(K_);
        for(int i=0;i<K_;++i){
            std::cin >> colors_[i];
        }
    }
    void Solution::result(){
        int result{1};
        for(auto& color : colors_){
            result *= colorCount_[color];
        }
        std::cout << result;
    }
}


int main(int, char**){
    ex1573::Solution solution;
    solution.input();
    solution.result();
}

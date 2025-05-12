#include <iostream>
#include <unordered_map>

namespace ex1585{
    class Solution
    {
    private:
        int n_{0};
        std::unordered_map<std::string, int> fregs;
    public:
        void input();
        void result();
    };

    void Solution::input(){
        std::cin >> n_;
        std::cin.ignore();
        std::string penguin;
        for(size_t i=0; i<n_; ++i){
            std::getline(std::cin,penguin);
            ++fregs[penguin];
        }

    }

    void Solution::result(){
        int max_fregs{0};
        std::string name;
        for (const auto& pair : fregs){
            if(pair.second > max_fregs){
                max_fregs = pair.second;
                name = pair.first;
            }
        }
        std::cout << name;
    }

}

int main(int, char**){
    ex1585::Solution solution;
    solution.input();
    solution.result();
}

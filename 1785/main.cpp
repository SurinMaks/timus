#include <iostream>

class Solution
{
private:
    short n_{0};
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
    if(n_ >= 1 && n_ <= 4){
        std::cout << "few";
        return;
    }
    if(n_ >= 5 && n_ <= 9){
        std::cout << "several";
        return;
    }
    if(n_ >= 10 && n_ <= 19){
        std::cout << "pack";
        return;
    }
    if(n_ >= 20 && n_ <= 49){
        std::cout << "lots";
        return;
    }
    if(n_ >= 50 && n_ <= 99){
        std::cout << "horde";
        return;
    }
    if(n_ >= 100 && n_ <= 249){
        std::cout << "throng";
        return;
    }
    if(n_ >= 250 && n_ <= 499){
        std::cout << "swarm";
        return;
    }
    if(n_ >= 500 && n_ <= 999){
        std::cout << "zounds";
        return;
    }
    if(n_ >= 1000){
        std::cout << "legion";
        return;
    }
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

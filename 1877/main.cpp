#include <iostream>
#include <memory>

class Solution
{
private:
    int bad_man_{0};
    int key1_;
    int key2_;
public:
    Solution()= default;
    ~Solution() = default;
    void input();
    void result();
    void print();
};

void Solution::input(){
    std::cin >> key1_ >> key2_;
}

void Solution::result(){
    int max_value{9999};
    while (bad_man_ <= max_value)
    {
        if (bad_man_ == key1_){
            std::cout << "yes";
            return;
        }
        bad_man_++;
        std::swap(key1_, key2_);
    }
    std::cout << "no";
}

int main(int, char**){
    std::unique_ptr<Solution> solition = std::make_unique<Solution>();
    solition->input();
    solition->result();
}

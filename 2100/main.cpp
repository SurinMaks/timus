#include <iostream>
#include <memory>
#include <vector>
class Solution
{
private:
    unsigned int number_of_guests_{0};
    std::vector<std::string> last_name_and_guest_;
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> number_of_guests_;
    last_name_and_guest_.resize(number_of_guests_);
    for (auto& pos : last_name_and_guest_){
        std::cin >> pos;
    }
}

void Solution::result(){
    unsigned int count_guest{2};
    unsigned int bad_number{13};
    std::string find_text{"+one"};
    for(auto& pos : last_name_and_guest_){
        ++count_guest;
        if(pos.find(find_text) != std::string::npos){
            ++count_guest;
        }
    }
    if (count_guest == bad_number){
        ++count_guest;
    }
    std::cout << count_guest * 100;
}

int main(int, char**){
    std::unique_ptr<Solution> solution = std::make_unique<Solution>();
    solution->input();
    solution->result();
}
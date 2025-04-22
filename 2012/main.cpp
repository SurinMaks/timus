#include <iostream>

class Solution
{
private:
    short f_{0};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> f_;
}

void Solution::result(){
    short total_number_of_tasks{12};
    short total_championship_time(300); //5 hours
    short time_to_complete_remaining_tasks = (total_number_of_tasks -f_) * 45;
    if(time_to_complete_remaining_tasks > total_championship_time - 60){
        std::cout << "NO";
    }
    else{
        std::cout << "YES";
    }
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

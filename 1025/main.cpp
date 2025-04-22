#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
private:
    short numbers_groups{0};
    std::vector<short> number_voters_in_groups{};
public:
    Solution() = default;
    ~Solution() = default;
    void input();
    void result();
};

void Solution::input(){
    std::cin >> numbers_groups;
    number_voters_in_groups.resize(numbers_groups);
    for (auto& group : number_voters_in_groups){
        std::cin >> group;
    }
}

void Solution::result(){
    short count_voters{0};
    std::sort(number_voters_in_groups.begin(), number_voters_in_groups.end());
    for(short i=0; i<=(numbers_groups/2); ++i){
        if(number_voters_in_groups[i] == 1){
            ++count_voters;
            continue;
        }
        count_voters += number_voters_in_groups[i]/2+1;
    }
    std::cout << count_voters;
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

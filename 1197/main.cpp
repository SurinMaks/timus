#include <iostream>
#include <vector>
#include <array>

class Solution
{
private:
    short number_of_tests_{0};
    unsigned int count_{0};
    std::vector<std::string> positions_;
	static const unsigned int array_size = 8;
	std::array<const int,array_size> x_{2, 1, -1, -2, -2, -1, 1, 2};
	std::array<const int,array_size> y_{1, 2, 2, 1, -1, -2, -2, -1};
    int filed_size_x_=8;
    int filed_size_y_=8;
public:
    void input();
    void result();
};

void Solution::input(){
    std::cin >> number_of_tests_;
    positions_.resize(number_of_tests_);
    for (auto& position : positions_){
        std::cin >> position;
    }
}

void Solution::result(){
    for(auto& position :positions_){
        int col = position[0] - 'a' + 1;
        int row = position[1] - '0';
        for(int i=0; i<array_size; ++i){
            int new_x = col + x_[i];
            int new_y = row + y_[i];
            if( new_x >= 1 && new_y >= 1 && new_x <= filed_size_x_ && new_y <= filed_size_y_){
                ++count_;
            }
        }
        std::cout << count_<<'\n';
        count_=0;
    }
}


int main(int, char**){
    Solution solution;
    solution.input();
    solution.result();
}

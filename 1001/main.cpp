#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <memory>

class Solition
{
private:
    /* data */
    std::vector<long long> value_;
    long long temp_{0};
public:
    Solition() = default;
    ~Solition() = default;
    void input();
    void printSQRT();
};

void Solition::input(){
    while (std::cin >> temp_)
    {
        value_.emplace_back(temp_);
    }
}

void Solition::printSQRT(){
    for(auto it = value_.rbegin(); it != value_.rend(); it++){
        printf("%.4lf\n", sqrt(*it));
    }
}

int main(int, char**){
    std::unique_ptr<Solition> solution = std::make_unique<Solition>();
    solution->input();
    solution->printSQRT();
}

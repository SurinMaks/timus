#include <iostream>
#include <cmath>
#include <iomanip>

namespace ISolution{
    class ISolution
    {
        public:
        void virtual input() = 0;
        void virtual result() = 0;
        virtual ~ISolution() = default;
    };
}



namespace ex1192{
    class Solution : public ISolution::ISolution
    {
    private:
        int V_{0}, a_deg_{0};
        double K_{1.0};
        const double g_ = 10.0;
        const double pi_ = 3.1415926535;
    public:
        void input() override;
        void result() override;
    };

    void Solution::input() {
        std::cin >> V_ >> a_deg_ >> K_;
    }

    void Solution::result(){
        double a_rad = a_deg_ * pi_ / 180.0;
        double sin_2alpha = std::sin(2 * a_rad);
        double S1 = (V_ * V_) * sin_2alpha / g_;
        double total_distance = S1 * K_ / (K_ - 1);
        std::cout << std::fixed << std::setprecision(2) << total_distance;
    }
}

int main(int, char**){
    ex1192::Solution solution;
    solution.input();
    solution.result();
}

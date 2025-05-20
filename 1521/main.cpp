#include <iostream>


namespace ISolution{

    /**
    * @brief Adstract class
    */
    class ISolution
    {
        public:
        void virtual input() = 0;
        void virtual result() = 0;
        virtual ~ISolution() = default;
    };
}

namespace ex1521{
    class Solution : ISolution::ISolution
    {
        private:
            int N_{0}, K_{0};
        public:
            void input() override;
            void result() override;
    };

    void Solution::input(){
        std::cin >> N_ >> K_;
    }
}

int main(int, char**){
}

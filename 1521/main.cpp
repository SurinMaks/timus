#include <iostream>

/**
 * @brief Adstract class
 */
namespace ISolution{
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
        public:
            void input() override;
            void result() override;
    };
}

int main(int, char**){
}

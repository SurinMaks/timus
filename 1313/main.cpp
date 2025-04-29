#include <iostream>
#include <vector>
#include <algorithm> // для std::max и std::min

class Solution {
private:
    short n_{0}, rows_{0}, cols_{0};
    std::vector<std::vector<short>> matrix_;

public:
    void input();
    void result();
};

void Solution::input() {
    std::cin >> n_;
    rows_ = n_;
    cols_ = n_;

    matrix_.resize(rows_, std::vector<short>(cols_));
    for (short i = 0; i < rows_; ++i) {
        for (short j = 0; j < cols_; ++j) {
            std::cin >> matrix_[i][j];
        }
    }
}

void Solution::result() {
    for (int s = 0; s < rows_ + cols_ - 1; ++s) {
        int i_start = std::max(0, s - cols_ + 1);
        int i_end = std::min(s, rows_ - 1);
        for (int i = i_end; i >= i_start; --i) {
            int j = s - i;
            if (j >= 0 && j < cols_) {
                std::cout << matrix_[i][j] << ' ';
            }
        }
    }
}

int main() {
    Solution solution;
    solution.input();
    solution.result();
    return 0;
}
#include <iostream>
#include <vector>

// Абстрактный базовый класс для решения задач
class ISolution {
public:
    /**
     * @brief Виртуальный метод для ввода исходных данных
     */
    virtual void input() = 0;

    /**
     * @brief Виртуальный метод для вычислений и вывода результата
     */
    virtual void result() = 0;

    virtual ~ISolution() = default;
};

// Класс, реализующий решение задачи Иосифа
class Solution : public ISolution {
private:
    int N;  // Количество солдат
    int K;  // Шаг исключения
    std::vector<int> orderOfElimination;  // Порядок выбывания

    // Дерево Фенвика для эффективного поиска k-го солдата
    class FenwickTree {
    private:
        std::vector<int> tree;
        int size;

    public:
        FenwickTree(int n) : size(n), tree(n + 2, 0) {
            // Изначально все солдаты активны (1)
            for (int i = 1; i <= n; ++i) {
                update(i, 1);
            }
        }

        // Обновление значения в позиции index
        void update(int index, int delta) {
            while (index <= size) {
                tree[index] += delta;
                index += index & -index;  // Переход к родительскому узлу
            }
        }

        // Запрос суммы элементов от 1 до index
        int query(int index) {
            int res = 0;
            while (index > 0) {
                res += tree[index];
                index -= index & -index;  // Переход к предыдущему узлу
            }
            return res;
        }

        // Поиск k-го активного солдата
        int findKth(int k) {
            int left = 1, right = size, res = size;
            while (left <= right) {
                int mid = (left + right) / 2;
                int sum = query(mid);
                if (sum >= k) {
                    res = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            return res;
        }
    };

public:
    Solution() : N(0), K(0) {}

    // Ввод данных
    void input() override {
        std::cin >> N >> K;
    }

    // Вычисление порядка выбывания
    void result() override {
        FenwickTree ft(N);
        int currentPos = K;  // Первый выбывающий — K-й солдат

        for (int remaining = N; remaining > 0; --remaining) {
            // Находим текущего выбывающего
            int pos = ft.findKth(currentPos);
            orderOfElimination.push_back(pos);
            ft.update(pos, -1);  // Помечаем как выбывшего

            // Пересчитываем следующую позицию
            if (remaining > 1) {
                currentPos = (currentPos - 1 + K - 1) % (remaining - 1) + 1;
            }
        }

        // Вывод результата
        for (int num : orderOfElimination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Solution solution;
    solution.input();   // Ввод N и K
    solution.result();  // Вычисление и вывод
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Вариант 1: с использованием std::sort + std::unique (изменяет порядок элементов)
void remove_duplicates_sort(vector<int>& a)
{
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
}

// Вариант 2: с сохранением порядка элементов (через unordered_set)
void remove_duplicates_ordered(vector<int>& a)
{
    unordered_set<int> seen;
    a.erase(
        remove_if(a.begin(), a.end(),
            [&seen](int x) {
                return !seen.insert(x).second; // true, если элемент уже был
            }),
        a.end()
    );
}

int main()
{
    vector<int> listVector = {1, 2, 3, 4, 4, 5, 5, 6, 6};

    // Вариант 1: удаление дубликатов с сортировкой
    // remove_duplicates_sort(listVector);

    // Вариант 2: удаление дубликатов с сохранением порядка
    remove_duplicates_ordered(listVector);

    cout << "Результат: ";
    for (int x : listVector) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>

void moduleComparison(std::vector<int> vec)
{
    int i = 4;
    int j = 3;

    while (j >= 0 && i < vec.size()) {
        if (j >= 0 && i < vec.size()) {
            if (std::abs(vec[j]) > std::abs(vec[i])) {
                std::cout << vec[i] << " ";
                i++;
            }
            else if (std::abs(vec[j]) < std::abs(vec[i])) {
                std::cout << vec[j] << " ";
                j--;
            }
        }
    }
    while (j >= 0) {
        std::cout << vec[j] << " ";
        j--;
    }

}


int main()
{
    std::vector<int> vec = { -250,-100, -50, -5, 1, 10, 15, 25 };

    moduleComparison(vec);      

    return 0;
}
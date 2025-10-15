#include <iostream>
void newline(bool &flag) {
    if (flag == true) {
        flag = false;
    }
    else {
        std::cout << std::endl;
    }
}
int main() {
    int rows, columns;
    bool first_loop = true;
    std::cout << "Enter amount of rows: ";
    std::cin >> rows;
    if (!std::cin || rows <= 0) {
        std::cerr << "Error: invalid input" << std::endl;
        return -1;
    }

    std::cout << "Enter amount of columns: ";
    std::cin >> columns;
    if (!std::cin || columns <= 0) {
        std::cerr << "Error: invalid input" << std::endl;
        return -1;
    }

    int arr[rows][columns] {};
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            arr[j][i] = j + 1;
        }
    }
    for (int y = 0; y < columns; ++y) {
        newline(first_loop);
        for (int p = 0; p < rows; ++p) {
            std::cout << arr[p][y] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

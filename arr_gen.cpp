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
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            arr[i][j] = j + 1;
        }
    }
    for (int y = 0; y < rows; ++y) {
        newline(first_loop);
        for (int p = 0; p < columns; ++p) {
            std::cout << arr[y][p] << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include "matrix.h"

int main() {
    Matrix mat1(2, 2);
    Matrix mat2(2, 2);

    std::cout << "Enter values for mat1 (2x2):" << std::endl;
    std::cin >> mat1;
    std::cout << "Enter values for mat2 (2x2):" << std::endl;
    std::cin >> mat2;

    Matrix sum = mat1 + mat2;
    Matrix diff = mat1 - mat2;
    Matrix product = mat1 * mat2;

    mat1 += mat2;
    mat1 -= mat2;
    mat1 *= 2;

    std::cout << "Sum of mat1 and mat2:\n" << sum;
    std::cout << "Difference of mat1 and mat2:\n" << diff;
    std::cout << "Product of mat1 and mat2:\n" << product;

    std::cout << "mat1 after += mat2:\n" << mat1;
    std::cout << "mat1 after -= mat2:\n" << mat1;
    std::cout << "mat1 after *= 2:\n" << mat1;

    return 0;
}

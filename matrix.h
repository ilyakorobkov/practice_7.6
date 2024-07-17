#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

#ifdef _WIN32
    #ifdef MATRIXLIB_EXPORTS
        #define MATRIXLIB_API __declspec(dllexport)
    #else
        #define MATRIXLIB_API __declspec(dllimport)
    #endif
#else
    #define MATRIXLIB_API
#endif

class MATRIXLIB_API Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows, cols;

public:
    Matrix(int r, int c);
    Matrix operator+(const Matrix &other) const;
    Matrix operator-(const Matrix &other) const;
    Matrix operator*(const Matrix &other) const;
    Matrix& operator+=(const Matrix &other);
    Matrix& operator-=(const Matrix &other);
    Matrix& operator*=(int scalar);
    friend std::istream& operator>>(std::istream &is, Matrix &matrix);
    friend std::ostream& operator<<(std::ostream &os, const Matrix &matrix);
};

#endif 

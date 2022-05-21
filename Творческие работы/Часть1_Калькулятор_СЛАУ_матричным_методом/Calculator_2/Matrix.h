#pragma once
#include "Functions.h"

class Matrix
{
private:
    int size_Matrix_n;
    int size_Matrix_m;
    float** matrix;
public:
    Matrix();
    Matrix(int, int);
    Matrix(int, int, float**);
    Matrix(const Matrix&);
    ~Matrix();
    int get_size_Matrix_n();
    int get_size_Matrix_m();
    float** get_Matrix();
    void set_Matrix(float**);
    void set_Matrix_2();
    void set_size_Matrix(int,int);
    void create_Matrix();
    void print_Matrix();
    void Minor(Matrix*, int, int);
    float Determinant();
    void union_Matrix();
    void Transposition_Matrix();
    void inverse_Matrix(float);
    void solution_x(Matrix&);
    void Reading_matrix(std::string filename);
};
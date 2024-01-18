#include "hw1.h"


namespace algebra {

Matrix zeros(size_t n, size_t m)
{
    Matrix mat(n, std::vector<double>(m,0));
    return mat;
}

Matrix ones(size_t n, size_t m)
{
    Matrix mat(n, std::vector<double>(m, 1));
    return mat;
}

Matrix random(size_t n, size_t m, double min, double max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);

    Matrix mat(n, std::vector<double>(m, distrib(gen)));

    return mat;
}

void show(const Matrix& matrix)
{
    for(const auto& row: matrix) 
    {
        for(const auto& element : row)
        {
            std::cout << std::setprecision(3) << element << " ";
        }
        std::cout << std::endl;
    }
}

Matrix multiply(const Matrix& matrix, double c)
{   
    //copy constructor function
    Matrix mat(matrix);
    for(auto& row : mat) 
    {
        for(auto & element : row) 
        {
            element *= c;
        }
    }
    return mat;
}

Matrix multiply(const Matrix& matrix1, const Matrix& matrix2)
{
    int row = matrix1.size();
    int col = matrix1[0].size();
    Matrix mat(row, std::vector<double>(col, 0));

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j) 
        {
            mat[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return mat;
}

Matrix sum(const Matrix& matrix, double c)
{

}

Matrix sum(const Matrix& matrix, double c)
{
    
}

} // namespace algebra


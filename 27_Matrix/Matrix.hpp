#ifndef MATRIC_HPP
#define MATRIX_HPP

template <typename T>
class Matrix{
public:
    Matrix(int rows, int cols);

    virtual ~Matrix();
    Matrix(const Matrix<T>& other);
    Matrix& operator=(const Matrix<T>& m);

    void print() const;

    Matrix<T> load(const char *filename);

protected:
    int rows, cols;
    T **data;
};


#endif
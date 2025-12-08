#ifndef SQUAREMATRIX_HPP
#define SQUAREMATRIX

template <typename T>
class SquareMatrix : public Matrix<T> {
public:
    SquareMatrix (int n=1);

    SquareMatrix<T> load(const char *filename);

    SquareMatrix<T> operator=(const SquareMatrix<T>& m);
};

#endif
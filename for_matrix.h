#ifndef FOR_MATRIX_H
#define FOR_MATRIX_H


class For_matrix
{
    public:
        For_matrix();
        virtual ~For_matrix();
    protected:
    private:
        int *a;
        operator+(For_matrix, For_matrix);
        operator-(For_matrix, For_matrix);
        operator*(For_matrix, For_matrix);
};

#endif // FOR_MATRIX_H

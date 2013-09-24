#include <iostream>
#include "for_matrix.h"
using namespace std;
For_matrix::For_matrix()
{
    //ctor
}
For_matrix (const For_matrix &x)
{

}
For_matrix::~For_matrix()// деструктор
{
    for(int i=0;i<3;++i)
        delete [] x[i];
    delete []x;
}

For_matrix operator+(For_matrix x, For_matrix y)
{
    int n=3;
    For_matrix temp;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            temp[i][j]=x[i][j]+y[i][j];
    return temp;
}

void show()
{
    int n=3;
    for(int i=0; i<n; ++i)
    {

       for(int j=0; j<n; ++j)
        {
            cout.width(3);
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}

For_matrix operator-(For_matrix x, For_matrix y )
{
    int n=3;
    For_matrix temp;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            temp[i][j]=x[i][j]-y[i][j];
    return temp;
}

For_matrix operator*(For_matrix x, For_matrix y)
{
    int n=3;
    For_matrix temp;
    for (int i=0; i < n; i++)
        for  (int k=0; k < n; k++)
            for (int j=0;j < n; j++)
                temp[i][k]+=(x[i][j])*(y[j][k]);
    return temp;
}

For_matrix operator=(For_matrix x, For_matrix y)
{
    int n=3;
    For_matrix temp;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            temp[i][j]=x[i][j];
    return temp;
}

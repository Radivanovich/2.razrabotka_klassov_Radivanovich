#include <iostream>
#include "for_matrix.h"
using namespace std;
#include<stdlib.h> //что доделать???
int main()
{
    cout << "Hello, Alexey Alexandrovich ! " << endl;
    For_matrix res;
    int n=3;
    res=a+b;
    res.show();
    res=a-b;
    res.show();
    res.a*b;
    res.show();
//    cout<< "Enter the number of matrix. m = ";
    int m=3;
//    cin>>m;
    For_matrix *arr;
    arr=new For_matrix[m];
//    cout<< "enter the serial number of the matrix. i = ";
    int i=2;
//   cin>>i;
    for (int j=0; j<n; ++j)
        for(int k=0; k<n; ++k)
            arr[i].a[j][k]=rand()%100;
    res=arr[i]*arr[i];
    ras.show();
    return 0;
}

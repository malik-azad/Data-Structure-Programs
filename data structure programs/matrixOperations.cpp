#include<iostream>
using namespace std;

class Matrix
{
    int rows;
    int columns;

public:
    double **twoDimArray;

    // get number of rows in a matrix object
    int getRows()
    {
        return rows;

    }
    // get number of columns in a matrix object
    int getColumns()
    {
        return columns;
    }
    // set number of rows in a matrix object
    void setRows(int r)
    {
        rows = r;
    }

    // set number of columns in a matrix object
    void setColumns(int c)
    {
        columns = c;
    }

    //constructor to dynamically create the two dimensional array of rows , columns dimensions
    Matrix(int r, int c)
    {
        setRows(r);
        setColumns(c);

        twoDimArray =  new  double*[r];
        for(int i= 0; i<r ; i++)
        {
            twoDimArray[i]= new double[c];
        }
    }
    //member function to initialize the two dimensional array with user supplied values
    void initialization()
    {
        int rows= getRows();
        int columns= getColumns();
        cout<<"enter the elements of the matrix\n";

        for(int i=0; i<rows ; i++)
        {
            cout<<"enter the elements of the row "<< i << endl;
            for(int j=0; j<columns; j++)
            {
                cin>>twoDimArray[i][j];
            }
        }
    }

    //member function to display the two dimensional array
    void display()
    {
        int rows= getRows();
        int columns= getColumns();

        cout<<"the elements of the matrix are\n";

        for(int i=0; i<rows; i++)
        {

            for(int j=0; j<columns; j++)
            {
                cout<<twoDimArray[i][j]<<"\t";
            }

            cout<<endl;
        }
    }

    //member function to overload  the (+) operator to add two matrices
    Matrix  operator+(Matrix  matrix2 )
    {
        int rows = getRows();
        int columns = getColumns();

        Matrix matrix3(rows,columns);

        for(int i =0;  i< rows; i++)
            for(int j=0 ; j< columns; j++)
            {
                matrix3.twoDimArray[i][j]= twoDimArray[i][j] + matrix2.twoDimArray[i][j];
            }

        return matrix3;
    }
    //member function to overload  the (*) operator to multiply two matrices
    Matrix  operator*(Matrix  matrix2 )
    {
        int rows = getRows();
        int productTerms = getColumns();
        int columns = matrix2.getColumns();

        Matrix matrix3(rows,columns);

        for(int i =0;  i< rows; i++)
            for(int j=0 ; j< columns; j++)
            {
                double sum = 0;
                for(int k=0; k<productTerms; k++)
                {
                    sum = sum + twoDimArray[i][k] * matrix2.twoDimArray[k][j];
                }
                matrix3.twoDimArray[i][j]= sum;
            }

        return matrix3;
    }

    //member function to get the transpose of a matrix object
    Matrix transpose()
    {
        // write here the code for matrix transpose by yourself
    }
    //member function to check whether a matrix object is diagonal or not

    bool isDiagonal()
    {
        // write here the code for checking wheter a matrix is diagonal or not by yourself
    }


    //member function to check whether a matrix object is symmetric or not

    bool isSymmetric()
    {
        // write here the code for checking wheter a matrix is symmetric or not by yourself
    }
};

int main()
{
    Matrix m1(2,2), m2(2,2), m3(2,2);
    m1.initialization();
    m2.initialization();

    m1.display();
    m2.display();

    cout<<"\n addition result is \n";

// we assume m1 and m2 are addition compliant that is they are (m by n ) matices
    m3 = m1 + m2;

    m3.display();


    cout<<"\n multiplicaiton result is \n";
// we assume m1 and m2 are multiplication compliant that is m1 is  (m by n ) and m2 is (n by p)
    m3 = m1 * m2;

    m3.display();


     cout<<"\n tranpose of m1 matrix is  \n";

     //m1.transpose();

     Matrix m4(4,5);
     m4.initialization();
m4.display();

    return 0;
}




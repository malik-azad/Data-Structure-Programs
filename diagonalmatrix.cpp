#include <iostream>
using namespace std;

int main()
{
  int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  int i, j, flag = 0;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      {
        if (i == j && matrix[i][j] == 0)
        {
          flag = 1;
          break;
        }
        else if (i != j && matrix[i][j] != 0)
        {
          flag = 1;
          break;
        }
      }
    }
  
  }
  if (flag == 0)
      cout << "Matrix is Diagonal Matrix";
    else
      cout << "Matrix is Not Diagonal ";
}
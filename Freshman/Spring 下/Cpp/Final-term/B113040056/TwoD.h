#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;


typedef int * ArrayPtr;
class TwoD
{
public:
  TwoD();
  TwoD(int, int);
  ~TwoD();
  
  void setRC(int, int);
  int getRow();
  int getCol();
  void setMatrix(int, int, int); // void setMatrix(int row, int col, int value);
  int getMatrix(int, int); // int getMatrix(int row, int col);
  
  TwoD(const TwoD&);
  
  const TwoD& operator=(const TwoD&);
  
  friend TwoD operator+(const TwoD&, const TwoD&);
  
  friend TwoD operator*(const TwoD&, const TwoD&);
  
  TwoD(ifstream&);
  void writeFILE(ofstream&);

private:
  ArrayPtr * matrix;
  int Row;
  int Col;
};


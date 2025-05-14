1
2
3
4
5
6
// Online C compiler to run C program online
#include <stdio.h>
int row,col;
int shri[2][3] = {
    {1,2,3},
    {4,5,6}
    
};
int main() {
  for(row=0;row<2;row++)
  {
      for(col=0;col<3;col++)
      {
          printf("%d\n",shri[row][col]);
      }
  }

    return 0;
}

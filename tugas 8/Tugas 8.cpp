#include <iostream>
using namespace std;
int main()
//Program membuat setengah piramida menggunakan pengulangan/repetition
{
      int  i, j, n;
      n=5;
      for (i = 1; i <= n; i++)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "* ";
            }
            //Bagian akhir
            cout << "\n";
      }
      return 0;
}

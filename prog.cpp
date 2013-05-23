#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
   const int m=10; 
   int mas[m]={34,56,4,10,77,51,93,30,5,52};
   int insert; 
   setlocale(0, "Russian");

   cout << "\nНеотсортированый массив:\n";
   for ( int i=0; i<m; i++)
      cout << setw(4) << mas[i];


   for (int j=1;j<m; j++)
   {
      insert=mas[j];
      int k=j;
        while ((k>0)&&(mas[k-1]>insert))
        {
           mas[k]=mas[k-1];
           k--;
        }
      mas[k]=insert;
   }
 
   cout <<"\nОтсортированый массив:\n";
   
   for (int i=0; i<m; i++)
   {
     cout<<setw(4)<<mas[i];
   }
   cout<<endl;
   
   getch();
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
     int num =5 ;
     cout<<num<<endl; 
     // address of operttor ->&
     cout<<"Addresss of num is :"<<&num<<endl;
     int *ptr=&num;
     cout<<"value of :"<<ptr<<endl;
     cout<<"value of *ptr is :"<<*ptr<<endl;
   double b=4.85;
   double *p2=&b;
   cout<<"The address of b is "<<p2;
   cout<<"The value of b is :"<<*p2;


     return 0;
} 
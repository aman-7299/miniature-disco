#include<iostream>
using namespace std;
int main()
{
     int arr[5]={1,2,3,4,5};
     char ch[6]= "abcde";
     cout<<arr<<endl;
     //Attention here 
   //  cout<<ch<<endl;
    char *c=&ch[0];
    //print entire string here 
   // cout<<c<<endl;
    char temp='p';
    char *p=&temp;
    cout<<p<<endl;

     return 0;

}
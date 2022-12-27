#include<iostream>
using namespace std;

int main(){
    //Creat a pointer and poninting some garbage value
    // int *p=0; //jab hme nhi pata kha se kaam suru kre waha pe 0 se point kra lenge 
     //
/* int i=5;
//  int *p=&i;
  int *p=0;
  p=&i;
  cout<<*p<<endl;
  cout<<p<<endl;

*/
int num=5;
// int a= num;
// a++;
// cout<<"The value of a is "<<a<<endl;
// cout<<"The vale of num is "<<num;

int *p=&num;
cout<<"The  before value of num is :"<<num<<endl;
cout<<"The number of is p "<<*p++<<endl;
// (*p)++;
*p=*p+1;
cout<<"The value of *p is:"<<*p<<endl;
cout<<"The after  value of num is :"<<num<<endl;
// cout<<"The number of is p "<<*p<<endl;
//Copying a pointer 
// int *q=p;
//  cout<<"The value p is "<<p<<endl;
//  cout<<"The value of q is "<<q<<endl;
//  cout<<"The vale of *p is "<<*p<<endl;
//  cout<<"The value of *q is "<<*q<<endl;
// important concept
//  int i=2;
// int *t=&i;
// // (*t)++;
// // cout<<(*t)++<<endl;
// cout<<"Before t:"<<t<<endl;
// t=t+1;
// cout<<"After t+1:"<<t<<endl;

    return 0;
}
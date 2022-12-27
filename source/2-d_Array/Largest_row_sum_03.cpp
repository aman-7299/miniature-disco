#include<iostream>
#include<climits>
using namespace std;
//to print row wise sum
void printSum(int arr[][3], int row, int col){
cout<<"printing Sum--"<<endl;
    
      for(int i=0;i<3;i++){
          int sum=0;
        for(int j=0;j<3;j++){
             sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
     }
    cout<<endl;
}
 int largestRowSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
     int rowIndex=-1;
     for(int row=0;row<3;row++){
          int sum=0;
        for(int col=0;col<3;col++){
             sum=sum+arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }

 }
       cout<<"The maximum is sum is :"<<maxi<<endl;
return rowIndex;
 }
int main()
 {
      int arr[3][3];
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
     }
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      printSum(arr, 3, 3);
   int ansIndex=largestRowSum(arr,3,3);

  cout<<"Max row is at index : "<<ansIndex<<endl;
  return 0;
 }  
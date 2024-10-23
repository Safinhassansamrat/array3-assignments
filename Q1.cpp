// Count the number of triplets whose sum is equal to the given value x
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/4;
    int x;
    cout<<"enter the number : ";
    cin>>x;
    int count =0;
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            for(int k = j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==x) count++;
            }
        }
    }
    cout<<"the number of triplets which is equal to X is : "<<count;
}
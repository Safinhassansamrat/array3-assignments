// Find the factorial of a large number
#include<iostream>
using namespace std;
int multi(int si,int v[],int x){
    int carry = 0;
    for(int i = 0;i<si;i++){
        int pro = v[i]*x+carry;
        v[i]=pro%10;
        carry = pro/10;
    }
    while(carry){
        v[si]=carry%10;
        carry = carry/10;
        si++;
    }
    return si;

}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
   int arr[500];
   arr[0]=1;
   int size = 1;
   for(int i = 2;i<=n;i++){
     size = multi(size,arr,i);
   }
   for(int i = size-1;i>=0;i--) cout<<arr[i]<<" ";
    }

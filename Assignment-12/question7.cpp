#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<< "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2 = v;
    int i =0;
    int j =n-1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    if(v==v2){
        cout<< "The array is a palindrome";
    }
    else{
        cout<< "The array is not a palindrome";
    }
    return 0;
}
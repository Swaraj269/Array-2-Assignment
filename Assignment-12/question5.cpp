#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    cout<< "Enter the elements of the array: ";
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<=n-1; i++){
        if(i%2==0){
            v[i]+=10;
        }
        else{
            v[i]*=2;
        }
    }
    for(int i=0; i<=n-1; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
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
    for(int i=0; i<=n-2; i++){
        bool flag = false;
        for(int j=0; j<=n-1; j++){
            if(v[j]==v[i] && i!=j){
                flag = true;
            }
        }
        if(flag==false){
            cout<<"Unique value: "<<v[i]<<endl;
        }
    }
    return 0;
}
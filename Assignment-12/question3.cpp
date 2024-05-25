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
    bool flag = false;
    for(int i=0; i<=n-2; i++){
        if(v[i]<=v[i+1]){
            flag = true;
        }
        else{
            break;
        }
    }
    if(flag == true){
        cout<< "Array is sorted"<< " ";
    }
    else{
        cout<< "Array is not sorted"<< " ";
    }
    return 0;
}
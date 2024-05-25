#include <iostream>
#include <vector>
#include<algorithm>
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
    int x;
    cout<< "Enter the element: ";
    cin>>x;
    int count = 0;
    for(int i=0; i<=n-1; i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<< count;
    return 0;
}
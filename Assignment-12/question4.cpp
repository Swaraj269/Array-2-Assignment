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
    int sumeven = 0;
    int sumodd = 0;
    for(int i=0; i<=n-1; i++){
        if(i%2==0){
            sumeven += v[i];
        }
        else{
            sumodd += v[i];
        }
    }
    cout<< "The difference between sumeven and sumodd is "<<sumeven-sumodd<<endl;
    return 0;
}
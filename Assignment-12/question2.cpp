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
    int lg = v[0];
    int slg = v[0];
    int tlg = v[0];
    for(int i=0; i<=n-1; i++){
        if(v[i]>lg){
            tlg = slg;
            slg = lg;
            lg = v[i];
        }
        else if(v[i]>slg){
            tlg = slg;
            slg = v[i];
        }
        else{
            tlg = v[i];
        }
    }
    cout<< "Third lagest element in the array is : "<< tlg << endl;
    return 0;
}
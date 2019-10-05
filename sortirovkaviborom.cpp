#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
void Viborom(vector<int>v){
    int tmp = 0;
    for(int i = 1; i < v.size(); i++){
        for (int j = i; j > 0 && v[j-1] > v[j]; j--){

            tmp = v[j];
            v[j] = v[j-1];
            v[j - 1] = tmp;
        }
    }
    for (int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";

    }
}
int main(){
    vector<int> v(5);
    v[0]=2;
    v[1]=6;
    v[2]=1;
    v[3]=3;
    v[4]=4;
    Viborom(v);
    return 0;
}








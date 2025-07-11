#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> colours = {"green","red","blue","pink"};
    for(int i=0;i<colours.size();i++ ) {
        for(int j=0;j<1;j++) {
            (colours.at(i))[j]-=32;
        }
    }
    for(string colour:colours) {
        cout<< colour<<"\n";

    }

    return 0;

}
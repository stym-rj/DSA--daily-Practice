#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<char>a;
    int N,y=-1;
    char x;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        a.push_back(x);
    }
    cin>>x;
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        for(int i=0;i<N;i++){
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
                i++;
            }
            else{
                y=i;
                break;
            }
        }
        
    }
    else{
        for(int i=0;i<N;i++){
            if((a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')||(a[i+1]=='A'||a[i+1]=='E'||a[i+1]=='I'||a[i+1]=='O'||a[i+1]=='U')){
                y=i;
                break;
            }
            else{
                i++;
                i++;
            }
        }
    }
    if(y==-1){
        cout<<"Can't be inserted";
        return 0;
    }
    for(int i=0;i<N;i++){
        if(i==y){
            cout<<x<<" ";
        }
        cout<<a[i]<<" ";
    }
    return 0;
}
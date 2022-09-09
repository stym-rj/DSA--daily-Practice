#include<bits/stdc++.h>
struct node{
    int data;
    struct node* nxt;
};
struct node* Head=NULL;
void insert(int x){
    struct node *t=new struct node;
    if(t!=NULL){
        t->data=x;
        t->nxt=Head;
        Head=t;
    }
}
int main(){
    int n;
    std::cin>>n;
    if(n<=0){
        std::cout<<"Invalid Number";
        return 0;
    }
    while(n--){
        int t;
        std::cin>>t;
        insert(t);
    }
    struct node *x=Head;
    int pn=0;
    while(x!=NULL){
        int p=1;
        if(x->data<=1){
            x=x->nxt;
            continue;
        }
        for(int i=2;i<x->data;i++){
            if(x->data%i==0)
                p=0;
        }
        if(p)
            pn++;
        x=x->nxt;
    }
    std::cout<<pn;
}
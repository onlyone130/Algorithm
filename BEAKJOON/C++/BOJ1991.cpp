#include <iostream>
#include <cstring>
#include <vector>

//트리 순회
using namespace std;

const int NMAX = 26;

struct node{
    char left;
    char right;
};

vector<node> v(NMAX);

void preorder(char node){
    if(node == '.'){
        return;
    }
    cout << node;
    preorder(v[node].left);
    preorder(v[node].right);
}

void inorder(char node){
    if(node == '.'){
        return;
    }
    inorder(v[node].left);
    cout << node;
    inorder(v[node].right);
}

void postorder(char node){
    if(node == '.'){
        return;
    }
    postorder(v[node].left);
    postorder(v[node].right);
    cout << node;
}
int main(){
    int n;
    cin >> n;
    
    char rl, l, r;
    for(int i = 0; i < n; i++){
        cin >> rl >> l >> r;
        v[rl].left = l;
        v[rl].right = r;
    }

    preorder('A');
    cout << '\n';

    inorder('A');
    cout << '\n';

    postorder('A');
    
    return 0;
}
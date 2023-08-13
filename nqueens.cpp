#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    char c;
    int freq;
    Node *left;
    Node *right;
    Node(char ch,int f){
        c=ch;
        freq=f;
        left=right=nullptr;

    }
};
struct  cmp
{
    bool operator()(Node* a,Node* b){

        return b->freq<a->freq;
    }
};

priority_queue<Node*,vector<Node*>,cmp> pq;

Node* constructTree(){
    
    while(pq.size()>1){
        Node* a=pq.top();
        pq.pop();
        Node* b=pq.top();
        pq.pop();

        Node* node=new Node('#',a->freq+b->freq);
        node->left=a;
        node->right=b;
        pq.push(node);
    }
    return pq.top();
}


void print(Node* root,string s){
    if(root->left==nullptr&&root->right==nullptr){
        cout<<root->c<<"   :"<<s<<"\n";
        return;
    }
    print(root->left,s+"0");
    
    print(root->right,s+"1");

}
int main(){
    string  str;
    cin >> str;

    vector<int> vect(26,0);

    for(auto a:str){
        vect[a-'a']++;
    }
    for(int i=0;i<26;i++){
      int ch=i+'a';
      if(vect[i]!=0){
        Node* node=new Node(ch,vect[i]);
        pq.push(node);

      }
    }
    Node* root=constructTree();
   
    print(root,"");
    return 0;
}
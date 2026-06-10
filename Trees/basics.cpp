#include<iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    vector<Node*> children;
    Node(int x){
        data = x;
    }
};

void addChild(Node* parent,Node* child)
{
    parent->children.push_back(child);
}
void seeParents(Node* node, Node* parent)
{
    if (parent == nullptr) {
        cout << "Node " << node->data << " -> No parent (Root)" << endl;
    } else {
        cout << "Node " << node->data << " -> Parent is " << parent->data << endl;
    }
    for(auto child: node->children)
    {
        seeParents(child,node);
    }
}
void seeChilds(Node* node)
{
    cout<<node->data<<"->";
   if(node->children.empty())
   {
    cout<<"no child";
   }
   else{
     for(auto child:node->children)
    {
        cout<<child->data<<" ";
    }
   }
    cout<<endl;
    for(auto child:node->children)
    {
        seeChilds(child);
    }
}
void printLeafNodes(Node*node)
{
     if(node->children.empty()) {
        cout << node->data << " ";
        return;
    }
    for (auto child : node->children)
        printLeafNodes(child);
}


int main()
{
    Node* root = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    addChild(root, n2);
    addChild(root, n3);
    addChild(n2, n4);
    addChild(n2, n5);

    cout<<"parents of each node"<<endl;
    seeParents(root,nullptr);
    seeChilds(root);
    return 0;
}
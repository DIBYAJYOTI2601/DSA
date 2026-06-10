#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;  
    Node(int val)
    {   
        data = val;
        left=nullptr;
        right=nullptr;
    } 
};
Node* buildTree(Node* root)
{
    int data;
    cout<<"enter data";
    cin>>data;
    cout<<endl;
    root = new Node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"left of "<<data;
    root->left = buildTree(root->left);

    cout<<"right of "<<data;
    root->right = buildTree(root->right);
    return root;

}
void printPreOrder(Node *root)
{
    if(root==nullptr) return;
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
void printInOrder(Node* root)
{
    if(root==nullptr) return;
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
void printPostOrder(Node* root)
{
    if(root==nullptr) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<< " ";
                
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }

    }
}
bool searchNode(Node* root, int target) {
    if (root == nullptr) return false;
    if (root->data == target) return true;
    return searchNode(root->left, target) || searchNode(root->right, target);
}
Node* insertNode(Node* root, int val)
{
    if(root==nullptr)
    {
        return new Node(val); 
    }
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        if(curr->left==nullptr)
        {
            curr->left = new Node(val);
            return root;
        }
        else{
            q.push(curr->left);
        }
        if(curr->right==nullptr)
        {
            curr->right = new Node(val);
            return root;
        }
        else{
            q.push(curr->right);
        }
    }
    return root;   
}
Node* buildLevelOrder(Node* root)
{
    int data ;
    cout<<"enter root data";
    cin>>data;
    cout<<endl;
    
    if (data == -1)
        return NULL;

    root = new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        int left,right;
        cout<<"enter left data"<<temp->data;
        cin>>left;
        if(left!=-1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }
        cout<<"enter right data"<<temp->data;
        cin>>right;
        if(right!=-1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }
    return root;
}
int main()
{
    // Node* root = NULL;
    // root = buildTree(root);
    // root = insertNode(root,10);
    // printInOrder(root);
    // cout<<endl;
    // printPreOrder(root);
    // cout<<endl;
    // printPostOrder(root);
    // cout<<endl;
    // levelOrder(root);
    // cout<<endl;
    Node* root1 = NULL;
    root1 = buildLevelOrder(root1);
    levelOrder(root1);

    
    return 0;
}
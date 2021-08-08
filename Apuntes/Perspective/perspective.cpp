#include <bits/stdc++.h>

using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    void perspective(Node *root, vector<int> &vis, int depth) {
		if(root == NULL) return;
        if(depth > ((int)vis.size())-1) vis.push_back(root->data);
        perspective(root->right, vis, depth+1);
        perspective(root->left, vis, depth+1);
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    cin >> t;

    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    vector<int> ans;
    myTree.perspective(root,ans,0);
    for(auto x:ans) {
        cout<<x<<" "<<endl;
    }
    return 0;
}

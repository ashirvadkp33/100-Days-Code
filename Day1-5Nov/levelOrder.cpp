//https://www.codingninjas.com/studio/problems/zigzag-binary-tree-traversal_920532?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    queue<TreeNode<int>*>q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode<int>*temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left!=NULL)
        q.push(temp->left);

        if(temp->right!=NULL)
        q.push(temp->right);
    }
    return ans;
}

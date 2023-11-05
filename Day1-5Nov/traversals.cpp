//https://www.codingninjas.com/studio/problems/tree-traversal_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

void  preorder(vector<int>&pre,TreeNode *root)
{
    if(root==NULL)
    return ;

    pre.push_back(root->data);
    preorder(pre,root->left);
    preorder(pre,root->right);

}

void  postorder(vector<int>&post,TreeNode *root)
{
    if(root==NULL)
    return ;

    postorder(post,root->left);
    postorder(post,root->right);
    post.push_back(root->data);
}

void  inorder(vector<int>&inod,TreeNode *root)
{
    if(root==NULL)
    return ;

    inorder(inod,root->left);
    inod.push_back(root->data);
    inorder(inod,root->right);

}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int>inod,pre,post;
    vector<vector<int>>ans;

    inorder(inod,root);
    preorder(pre,root);
    postorder(post,root);

    ans.push_back(inod);
    ans.push_back(pre);
    ans.push_back(post);

    return ans;

}

//https://www.codingninjas.com/studio/problems/tree-traversals_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    queue<TreeNode<int> *>q;
    q.push(root);
    int height=0;
    while(!q.empty())
    {
        int n=q.size();
        height++;

        for(int i=0;i<n;i++)
        {
            TreeNode<int> *temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);

            if(temp->right!=NULL)
            q.push(temp->right);
        }
    }
    return height;
}

//https://www.codingninjas.com/studio/problems/create-binary-tree_8360671?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Node*createNodes(int i,int n,vector<int>&arr)
{  if(i>=n)
    return NULL;

    

 
    Node *root = new Node(arr[i]);
    
    //cout << "Hi " <<root->data<<" "<< i << endl;
    root->left = createNodes(2 * i + 1, n, arr);
    root->right = createNodes(2 * i + 2, n, arr);
 
  return root;
}

Node* createTree(vector<int>&arr){
    // Write your code here.
    int n=arr.size();
    int i=0;
    
    Node*root=createNodes(i,n,arr);
    
    return root;
    
}

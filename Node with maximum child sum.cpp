// M 1 : W/O Using Pair class :
  int sumOfChildren(TreeNode<int> * root){
      if(root==NULL)
        return 0;
      int sum =0;
      for(int i = 0 ; i < root->children.size() ;i++){
          sum += root->children[i]->data;
      }
      return sum;
  }
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Edge Case :
    if(root==NULL)
        return root;
    TreeNode<int>  * ans  = root;
    int sum = root->data;
    // Iteratively Pick Child & do recursive call :
    for(int i  = 0 ; i < root->children.size() ; i++){
       TreeNode<int> * x  = maxSumNode(root->children[i]);
      int  xSum = sumOfChildren(root->children[i]);
        if(xSum > sum ){
        sum = xSum;
        ans = x;
        } 
    }
    return ans;
}

// M 2 :
class Ans{
    public:
    TreeNode<int> * node;
    int sum;
    
    Ans(){
        node= NULL;
        sum = 0;
    }
};

Ans fun(TreeNode<int>* root){
    Ans ans;
    Ans max;
    ans.node = root;
    ans.sum = root->data;
    for(int i =0;i<root->children.size();i++){
        ans.sum += root->children[i]->data;
    }
    max = ans;
    for(int i =0;i<root->children.size();i++){
        Ans temp = fun(root->children[i]);
        if(max.sum<temp.sum)
            max = temp;
    }
    return max;
};

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL)
        return root;
    
    Ans ans = fun(root);
    return ans.node;
};

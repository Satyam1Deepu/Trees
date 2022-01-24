/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL)
        return root;
    TreeNode<int>* ans  = root;
    // Iterating Over childs of root;
    for(int i = 0 ; i < root->children.size() ; i++){
       TreeNode<int>* child = maxDataNode(root->children[i]);
      // Comparing With each nodes;
        if( ans->data  < child->data ){
            ans = child;
        }
    }
    
    return ans;
}

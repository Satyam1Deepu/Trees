/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int n) {
     // Edge Case :
    if(root ==NULL)
        return root;
       int max = n;
    // Small Calculation : 
    if( root->data > n){
        return root;
    }
    TreeNode<int> * ans = NULL;
  // Iteravtively pick child & do recursive call : 
    for(int i = 0 ; i < root->children.size(); i++ ){
     ans = getNextLargerElement(root->children[i] , n);
         if( root->children[i]->data > n)
            return root->children[i];
    }
    return ans ; 
}

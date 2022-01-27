/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
void replaceWithDepthValue(TreeNode<int>* root , int depth = 0) {
    // Edge Case :
    if(root==NULL)
        return ;
    // Small Calculation :
    root->data = depth;
    depth++;
    // Iteravtively pick child & do recursive call : 
    for(int i  = 0 ; i < root->children.size() ; i++){
       replaceWithDepthValue(root->children[i] , depth) ;
    }
}

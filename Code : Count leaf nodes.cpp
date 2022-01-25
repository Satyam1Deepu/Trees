/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
int getLeafNodeCount(TreeNode<int>* root) {
    // Edge Case :
    if(root==NULL)
        return -1;
    
    int smallCount = 0;
    // Iteratively + Recursive Call
    for(int i = 0; i < root->children.size();i++){
       smallCount += getLeafNodeCount(root->children[i]);
    }
    // Small Calculation : if there is no children then that is Leaf Node 
    if(root->children.size() ==0)
        smallCount = 1;
    
    return smallCount;
}

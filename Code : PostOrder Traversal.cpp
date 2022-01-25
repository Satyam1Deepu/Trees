/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
void printPostOrder(TreeNode<int>* root) {
    // Edge Case :
    if(root==NULL)
        return;
    // Iteratively recursive Call :  On child of subtree
    for(int i = 0 ; i < root->children.size() ; i++){
       printPostOrder(root->children[i]);
    }
    // Small Calculation
    cout<<root->data<<" ";	
}

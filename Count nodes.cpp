/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Edge case :
    if(root ==NULL)
        return 0;
    int count = 0;
    
    // Small Calculation :
    if(root->data > x )
        count++;
    //Iteratively traverse over vector + Recursive Call :
    for(int i = 0 ; i < root->children.size() ; i++){
        
     count += getLargeNodeCount(root->children[i] , x);
    }
    return count;
}

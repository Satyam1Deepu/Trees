/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
int getHeight(TreeNode<int>* root) {
    // Kauno Firki toh nhi le'rha :
    if(root==NULL)
        return 0;
    // Height of root :
    int ans = 0;
    // Iterating Over child :
    for(int i  = 0 ; i < root->children.size() ; i++){
         
        int height= getHeight(root->children[i]);
        if(height>ans){
            ans=height;
        }
        
    }
    return ans+1;
}

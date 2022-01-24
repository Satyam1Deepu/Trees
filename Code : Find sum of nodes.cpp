/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/

#include <climits>
int sumOfNodes(TreeNode<int>* root) {
    
    if(root==NULL)
        return INT_MIN;
    int ans  = root->data;
    
    for(int i = 0 ; i < root->children.size() ; i++){
        ans +=sumOfNodes(root->children[i]);
    }
    return ans;
}

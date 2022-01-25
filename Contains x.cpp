/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/
bool isPresent(TreeNode<int>* root, int x) {
    // Edge Case : 
    if(root==NULL)
        return false;
    bool checkX = false;
    // Small Calculation :
    if(root->data == x){
       checkX = true;
     return  checkX;
     }
    // Iterative + Recursive call :
    for(int i = 0  ; i < root->children.size() ; i++){
        
        checkX = isPresent(root->children[i], x);
        /* After dry run we get to know that if we found node then while in other 
           Other recursive call its getting false cause of for loop so in any instances we get true we need to 
           Stop ieration in each intsance of function : 
           e.g : 6 3 4 10 9 2 3 2 1 1 3 12 7 5 0 0 2 11 8 0 0 0 0 0
                 11
       */
        if(checkX==true)
            break;
     }
  
return checkX;
}

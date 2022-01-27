// M1 :
 bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
         // Edge Cases :
    if (root1==NULL && root2==NULL)
        return true;
    else if (root1==NULL && root2 != NULL)
        return false;
    else if (root2==NULL && root1 != NULL)
        return false;
     //
     
     if(root1->data != root2->data)
         return false;
      if(root1->children.size() != root2->children.size())
          return false;
     for(int i = 0 ; i < root1->children.size() ; i++){
        
        TreeNode <int> *child1 = root1 -> children[i];
        TreeNode <int> *child2 = root2 -> children[i];
        if(areIdentical(child1, child2)) { 
            i++;
        }
        else {
            return false;
        }
    }
    return true;
     
 }

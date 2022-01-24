/*
   कर्मण्येवाधिकारस्ते मा फलेषु कदाचन ।
   मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥
*/

#include <queue>

void printLevelWise(TreeNode<int>* root) {
    if(root ==NULL)
    return;
    // Created Queue Which stores address of Pending Nodes to be printed LevelWise :
    queue<TreeNode<int>*> pendingNodes;
    // Pushed Address of nodes in Queue :
    pendingNodes.push(root); 
    // 
    while(pendingNodes.size() != 0){
     TreeNode<int>* front = pendingNodes.front();
     pendingNodes.pop() ;
    cout<<front->data<<":";
    for(int i = 0 ; i < front->children.size(); i++){
        if(i != 0){
            cout<<",";
        }
        pendingNodes.push(front->children[i]);
        cout<<front->children[i]->data;
    }
        cout<<endl;
}
}

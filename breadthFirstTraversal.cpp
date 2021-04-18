void bTree::breadthFirstTraversal(){
    Node * tmp;
    tmp=root;
    queue que;

    do{
        cout<<tmp->data;
        if(tmp->lNode!=NULL){
            que.add(tmp->lNode);
        }
        if(tmp->rNode!=NULL){
            que.add(tmp->rNode)
        }
        if(que.empty()) break;
        tmp=que.del();

    }
}
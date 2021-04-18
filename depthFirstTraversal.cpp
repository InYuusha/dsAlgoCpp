void bTree::depthFirstTraversal(){
    Node *tmp;
    tmp=root; 
    stack s;
    do{
        cout<<tmp->data;
        if(tmp->rNode!=NULL){
            s.push(tmp->rNode);
        }
        if(tmp->lNode!=NULL){
            s.push(tmp->lNode);
        }
        if(s.empty()) break;
        tmp=s.pop();

    }
    while(1);
}
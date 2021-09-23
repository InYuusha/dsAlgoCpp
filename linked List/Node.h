
    class Node{

        public:
        
        Node();
        Node(int data,Node*next);

        int getData() const;
        Node* getNext() const;

        void setData(int val);
        void setNext(Node *next);

        private:

        int data;
        Node*next;

    };

    typedef Node* nodePtr;

Tree* makeTree(void);
Node* makeNode(Data*);
Data* makeData(int);

void traversePre(Node*);
void traversePost(Node*);
void traverseIn(Node*);

void freeNode(Node*);
void deallocateTree(Node*);

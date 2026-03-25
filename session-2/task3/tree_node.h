typedef struct _data {
    int value;
} Data;

typedef struct _node {
    Data* data;
    struct _node* child[2];
} Node;

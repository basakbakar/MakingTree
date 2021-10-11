#if !defined(Node_hpp)
#define Node_hpp

using namespace std;
class Node
{
    public: 
        int Data;
        int Number;
        Node * Left,*Right;
        Node (int Data, Node  *Left=0, Node  *Right=0)
        {
            this->Data=Data;
            this->Left=Left;
            this->Right=Right;
        }

};

#endif
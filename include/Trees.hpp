#if !defined(Trees_hpp)
#define Trees_hpp
#include "Node.hpp"
#include <iostream>
#include<exception>
#include<queue>
using namespace std;

class Trees{
    private:
        int elementcounter;
        int Lineage;
        int LineageNumber;
        int BenimKazanmam;
        int RakipKazanmasi;
    public:
        int ElementNumber;
        Node *Kok;
        Node *temp;
        Trees();
        void postorder(Node * Kok);
        void MakeTree();
        void Add(int AddingOne);
        void ShowPostOrder();
        int CalculateLineage(Node *p);
        int TotalLineage();
        void CompareLineageNumbers(Trees *a,Trees *b);
};
#endif 
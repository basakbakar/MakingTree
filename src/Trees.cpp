/**
* @file Trees.cpp
* @description Trees sinifinin fonksiyonlarini burada yazdik.
* @course 1. Ogretim A Grubu
* @assignment 3.Ödev
* @date 15.12.2019
* @author Başak Bakar/basak.bakar@ogr.sakarya.edu.tr
		  Hilal Yıldız/hilal.yildiz@ogr.sakarya.edu.tr
*/

#include <iostream>
#include "Node.hpp"
#include "Trees.hpp"

using namespace std;

Trees :: Trees ()
{
    elementcounter=0;
    Lineage=0;
    LineageNumber=0;
    int BenimKazanmam=0;
    int RakipKazanmasi=0;
}

void Trees:: postorder(Node * p) {
    if (p != NULL) {
        postorder(p->Left);
        postorder(p->Right);
        cout <<"<"<< p->Data<<",";
        cout<<CalculateLineage(p);
        cout<<">"<< " ";
        LineageNumber=LineageNumber + Lineage;
        Lineage=0;
    }
}

void Trees:: ShowPostOrder()
{
    postorder(Kok);
    cout << endl;
}

int Trees:: CalculateLineage(Node *p)
{ 
    if(p->Left!=NULL){
        Lineage++;
        CalculateLineage(p->Left);
    }    
    if(p->Right!=NULL){
        Lineage++;
        CalculateLineage(p->Right);
    } 
    return Lineage;
}

int Trees :: TotalLineage()
{
    cout<<LineageNumber;
    LineageNumber=0;
    return LineageNumber;
}

void Trees::CompareLineageNumbers(Trees *a, Trees *b)
{
    if(a>b)
    {
        RakipKazanmasi++;
        cout<<"-- TEBRIKLER TURU KAZANDINIZ --"<<endl<<endl<<"SKOR"<<endl<<"Benim: "<<BenimKazanmam<<endl<<"Rakip: "<<RakipKazanmasi;
        
    }
    if(a<b)
    {
        BenimKazanmam++;
        cout<<"-- TEBRIKLER TURU KAZANDINIZ --"<<endl<<endl<<"SKOR"<<endl<<"Benim: "<<BenimKazanmam<<endl<<"Rakip: "<<RakipKazanmasi;   
    }
    if(a==b)
    {
        cout<<"-- BERABERE --"<<endl<<endl<<"SKOR"<<endl<<"Benim: "<<BenimKazanmam<<endl<<"Rakip: "<<RakipKazanmasi;
    }
}

void Trees::MakeTree(){
    Kok = NULL;
    ElementNumber = 0;
}
  
void Trees:: Add(int AddingOne){
    bool Added = false;
    Node *NewOne=new Node(AddingOne);
    Node* temp;
    temp=Kok;
 
    NewOne->Left = NULL; 
    NewOne->Right = NULL;
  
    if(Kok == NULL){
        Kok = NewOne;
        ElementNumber++;
        return;
    }

    while((Kok != NULL) && (!Added))
    {
        if( NewOne->Data < Kok->Data)
        {
            if(Kok->Left != NULL) { Kok = Kok->Left; }
            else
            {
                Kok->Left =NewOne;
                Added = true;
                Kok=temp;
            }
        }
        else if ( NewOne->Data > Kok->Data)
        {
          if(Kok->Right != NULL) {Kok = Kok->Right;}
          else
          {
              Kok->Right = NewOne;
              Added = true;
              Kok=temp;
          }
        }
        else { cout << "Kopya" << endl;  return;}
        if(Added == true) { ElementNumber++;}    
    }
    
    
}
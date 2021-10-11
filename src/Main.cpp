/**
* @file Main.cpp
* @description Burada dosya okuma ve fonksiyon cagirma islemlerini yaptik.
* @course 1. Ogretim A Grubu
* @assignment 3.Ödev
* @date 15.12.2019
* @author Başak Bakar/basak.bakar@ogr.sakarya.edu.tr
		  Hilal Yıldız/hilal.yildiz@ogr.sakarya.edu.tr
*/

#include "../include/Trees.hpp"
#include "../include/Node.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{ 
    Trees *tree=new Trees();
    Trees *tree1=new Trees();
    Trees *tree2=new Trees();
    int a=0,b=0;
    
    tree1->MakeTree();
    fstream file; 
    int number1;
    string filename1; 

    filename1 = ".\\benim.txt"; 

    file.open(filename1.c_str());   
    while (file >> number1)
        tree1->Add(number1); 

    cout<<"Benim Agac Postorder:"<<endl;
    tree1->ShowPostOrder();
    cout<<"Benim Agac Soy Sayisi: ";
    tree1->TotalLineage();cout<<endl<<endl;
    
    
    tree2->MakeTree();
    fstream file2;
    int number2;
    string filename2; 

    filename2 = ".\\rakip.txt"; 

    file2.open(filename2.c_str());   
    
    while (file2 >> number2)
        tree2->Add(number2);

    cout<<"Rakip Agac Postorder:"<<endl;
    tree2->ShowPostOrder();
    cout<<"Rakip Agac Soy Sayisi: ";
    tree2->TotalLineage();cout<<endl;
    
    tree->CompareLineageNumbers(tree1,tree2);
    
    delete tree,tree1,tree2;
    return 0; 
}
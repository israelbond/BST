#include "table.h"

int main()
{
    T obj1;
    T obj2;
    T new_obj;
    obj1.build(); 	//builds a BST
    obj2.build(); 	//builds a BST
    obj1.display();	//displays a BST
    obj2.display();	//displays a BST
    cout<<"MERGING";
    /*  PLACE YOUR FUNCTION CALL HERE */
   int count= new_obj.merge_BSTs(new_obj,obj1,obj2); 
    if(count)
        cout<<"Count = "<<count;
    cout<<"---MEGRED!\n";

    new_obj.display();	//displays again after!
   
    return 0;
}

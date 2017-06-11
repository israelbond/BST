#include "table.h"

int main()
{
    T obj1;
//    T obj2;
//    T new_obj;
    obj1.build(); 	//builds a BST
//    obj2.build(); 	//builds a BST
    cout<<"display"<<endl;
    obj1.display();	//displays a BST
//    obj2.display();	//displays a BST

    /*  PLACE YOUR FUNCTION CALL HERE */

    int value = obj1.Remove_Smallest_With_One_child();
    if(value)   cout<<"REMOVED -"<<value<<endl;
    else        cout<<"NOT IN TREE\n";
/*
 * merge two bsts into new bst if the sum of the nodes are odd at each state
 *
    cout<<"MERGING";
    int count= new_obj.merge_BSTs(new_obj,obj1,obj2); 
    if(count)
        cout<<"Count = "<<count;
    cout<<"---MEGRED!\n";
    new_obj.display();	//displays again after!
*/
    return 0;
}

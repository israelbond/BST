//list.h
#include <stdlib.h>     /*srand, rand*/
#include <time.h>       /*time*/
#include <iostream>
//#include <cstring>
#include <cctype>
using namespace std;

class N
{
    public:
    N();
    void input(int&);
    int get_d();
    N*& get_left();
    N*& get_right();
//    void set_NULL();
    private: 
    int d;   //some questions use char * data;
    N* left;
    N* right;
};

class T
{
    public:
    	//These functions are supplied already
    	T();			//supplied
    	~T();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied
        void display(N*);
        void inorder_display(N*&);

/* ************** PLACE YOUR PUBLIC PROTOTYPE HERE ***************** */

    
        int Remove_Smallest_With_One_child();

        int merge_BSTs(T&, T, T);
        int insert(int);
 	
    private:
 	N* r;

        int Remove_Smallest_With_One_child(N*&);

        int merge_BSTs(N*&, N*, N*); 
        int insert(N*&,int&);
        void remove(N*& r);
/* ************** PLACE YOUR PRIVATE PROTOTYPE HERE ***************** */
};
  


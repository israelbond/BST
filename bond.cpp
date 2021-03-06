#include "table.h"
//N constructor
N::N(): d(0), left(NULL), right(NULL){}

void N::input(int&v)    {d = v;}
int N::get_d()          {return d;}
N*& N::get_left()        {return left;}
N*& N::get_right()       {return right;}
//void N::set_NULL()      {*this = NULL;}


T::T():r(NULL){}
T::~T()
{
    if(!r)  return;
    else    remove(r);

}

void T::build()
{
    int n=0, v=0;
    srand(time(NULL));
    n =                     ((rand() % 10) + 3);// n = 3 - 12
    for(int i=0; i<=n; ++i) v = insert((rand() % 67) + 3);// (3) - (69) 
    if(v)                   cout<<"-BST built-\n";
}

void T::display()
{
    if(!r)  return;
    else    display(r);
}

void T::display(N* r)
{
    cout<<"INORDER:";
    inorder_display(r);
}

void T::inorder_display(N*& r)
{
    if(!r)  return;
    else    
    {
        inorder_display(r->get_left());
        inorder_display(r->get_right());
    }
    cout<< r->get_d() << "  ";
}
int T::Remove_Smallest_With_One_child()
{
    if(!r)  return 0;
    else    return Remove_Smallest_With_One_child(r);
}

int T::Remove_Smallest_With_One_child(N*&)
{
    int v=0;
    if(!r)                      return v;
    if(r->get_left())                 v =Remove_Smallest_With_One_child(r->get_left());
    if(r->get_right() && !r->get_left())
    {
            N* t=   r->get_right();
            v   =   r->get_d();
            delete  r;
            r   =   t;
            return v;
    }
    else    return v;
}

void T::remove(N*& r)
{
    if(!r) return;
    remove(r->get_left());
    remove(r->get_right());
    delete r;
    r = NULL;
}

int T::insert(int v)
{
    return insert(r,v);
}

int T::insert(N*& r,int& v)
{
    if(!r)
    {   
        r = new N;
        r->input(v);
        return 1;
    }
    if(v < r->get_d())
    {
        return insert(r->get_left(),v);
    }
    else
    {
        return insert(r->get_right(),v);
    }
    return 0;
}
 
int T::merge_BSTs(T& new_obj,T obj_l, T obj_r)
{
    if(obj_l.r ==NULL || obj_r.r == NULL)
    {
        new_obj.r = NULL;//.set_NULL();
        return 0;
    }

    return new_obj.merge_BSTs(new_obj.r,obj_l.r,obj_r.r);
}
   
int T::merge_BSTs(N*& n_r, N* l_r, N* r_r){
    if(!l_r || !r_r)
    {
        n_r = NULL;//->set_NULL();
        return 0;
    }
    int sum =0;
    sum = (l_r->get_d() + r_r->get_d());
    if(sum % 2 == 1)
    {//ODD
        n_r->input(sum);
    }   
    //RECURSIVE N count
    return merge_BSTs(n_r->get_left(),l_r->get_left(),r_r->get_left()) +
           merge_BSTs(n_r->get_right(),l_r->get_right(),r_r->get_right()) + 1;
}

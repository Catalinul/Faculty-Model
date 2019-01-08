#ifndef REPO_H_INCLUDED
#define REPO_H_INCLUDED

#include<vector>

template<class T>
class Repo
{
 public:
     void add(T* ob);
     void remove(T* ob);
     void print();

protected:
    std::vector<T*> nActiv;
};


#endif // REPO_H_INCL
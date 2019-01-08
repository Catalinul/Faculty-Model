#include<iostream>
#include "Repo.h"

template<class T>
void Repo<T>::add(T* ob)
{
    nActiv.push_back(ob);
}

template<class T>
void Repo<T>::remove(T* ob)
{
    for(unsigned int i = 0; i < nActiv.size(); i++)
        if(nActiv[i] == ob)
            nActiv.erase(nActiv.begin()+i);
}

template<class T>
void Repo<T>::print()
{
    for(unsigned int i = 0; i < nActiv.size(); i++)
        std::cout << *nActiv[i]<<" " ;
    std::cout << '\n';

}

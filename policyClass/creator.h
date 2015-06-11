#ifndef CREATOR_H
#define CREATOR_H

#include <new>
#include <cstdlib>

template<typename T>
struct OpNewCreator
{
    static T *create()
    {
        return new T;
    }
};

template<typename T>
struct MallocCrator
{
    static T *create()
    {
        void *buf = std::malloc(sizeof(T));

        if(!buf) return nullptr;

        return new(buf) T;
    }
};

template<typename T>
class PrototypeCraetor
{
public:
    PrototypeCraetor(T *pObj = nullptr):
        pPrototype(pObj)
    {}

    T *create()
    {
        return pPrototype ? pPrototype->clone() : nullptr;
    }

    T *getPrototype() const
    {
        return pPrototype;
    }

    void setPrototype(T *pObj)
    {
        pPrototype = pObj;
    }
private:
    T *pPrototype;
};

#endif // CREATOR_H


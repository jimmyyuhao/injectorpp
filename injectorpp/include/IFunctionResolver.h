#ifndef INJECTORPP_IFUNCTIONRESOLVER_H
#define INJECTORPP_IFUNCTIONRESOLVER_H

#include <Windows.h>
#include <string>
#include "Function.h"

namespace InjectorPP
{
    class IFunctionResolver
    {
    public:
        virtual void Resolve(const ULONG64& modBase, const ULONG& typeIndex, Function& resolvedFunction) = 0;
    };
}

#endif
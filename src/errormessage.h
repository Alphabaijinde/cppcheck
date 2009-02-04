/*
 * Cppcheck - A tool for static C/C++ code analysis
 * Copyright (C) 2007-2009 Daniel Marjamäki, Reijo Tomperi, Nicolas Le Cam,
 * Leandro Penz, Kimmo Varis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 */

// THIS FILE IS GENERATED BY MACHINE, SEE ../tools/errmsg.cpp !

#ifndef errormessageH
#define errormessageH
#include <list>
#include <string>
#include "settings.h"
class ErrorLogger;
class Token;
class Tokenizer;
class ErrorMessage
{
private:
    ErrorMessage() { }
    static void _writemsg(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *tok, const char severity[], const std::string msg, const std::string &id);
    static void _writemsg(ErrorLogger *logger, const Tokenizer *tokenizer, const std::list<const Token *> &callstack, const char severity[], const std::string msg, const std::string &id);
    static void _writemsg(ErrorLogger *logger, const std::string msg, const std::string &id);
public:
    static void arrayIndexOutOfBounds(ErrorLogger *logger, const Tokenizer *tokenizer, const std::list<const Token *> &Location)
    {
        _writemsg(logger, tokenizer, Location, "all", "Array index out of bounds", "arrayIndexOutOfBounds");
    }
    static bool arrayIndexOutOfBounds(const Settings &s)
    {
        return s._showAll;
    }

    static void bufferOverrun(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "all", "Buffer overrun", "bufferOverrun");
    }
    static bool bufferOverrun(const Settings &s)
    {
        return s._showAll;
    }

    static void outOfBounds(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &what)
    {
        _writemsg(logger, tokenizer, Location, "always", "" + what + " is out of bounds", "outOfBounds");
    }
    static bool outOfBounds()
    {
        return true;
    }

    static void noConstructor(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &classname)
    {
        _writemsg(logger, tokenizer, Location, "style", "The class '" + classname + "' has no constructor", "noConstructor");
    }
    static bool noConstructor(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void uninitVar(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &classname, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Uninitialized member variable '" + classname + "::" + varname + "'", "uninitVar");
    }
    static bool uninitVar()
    {
        return true;
    }

    static void unusedPrivateFunction(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &classname, const std::string &funcname)
    {
        _writemsg(logger, tokenizer, Location, "style", "Unused private function '" + classname + "::" + funcname + "'", "unusedPrivateFunction");
    }
    static bool unusedPrivateFunction(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void memsetClass(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &memfunc)
    {
        _writemsg(logger, tokenizer, Location, "always", "Using '" + memfunc + "' on class", "memsetClass");
    }
    static bool memsetClass()
    {
        return true;
    }

    static void memsetStruct(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &memfunc, const std::string &classname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Using '" + memfunc + "' on struct that contains a 'std::" + classname + "'", "memsetStruct");
    }
    static bool memsetStruct()
    {
        return true;
    }

    static void operatorEq(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "'operator=' should return something", "operatorEq");
    }
    static bool operatorEq(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void virtualDestructor(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &Base, const std::string &Derived)
    {
        _writemsg(logger, tokenizer, Location, "always", "Class " + Base + " which is inherited by class " + Derived + " does not have a virtual destructor", "virtualDestructor");
    }
    static bool virtualDestructor()
    {
        return true;
    }

    static void unusedFunction(ErrorLogger *logger, const std::string &filename, const std::string &funcname)
    {
        _writemsg(logger, "[" + filename + "]: The function '" + funcname + "' is never used", "unusedFunction");
    }
    static bool unusedFunction(const Settings &s)
    {
        return s._checkCodingStyle || s._showAll;
    }

    static void mismatchAllocDealloc(ErrorLogger *logger, const Tokenizer *tokenizer, const std::list<const Token *> &Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "all", "Mismatching allocation and deallocation: " + varname + "", "mismatchAllocDealloc");
    }
    static bool mismatchAllocDealloc(const Settings &s)
    {
        return s._showAll;
    }

    static void memleak(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Memory leak: " + varname + "", "memleak");
    }
    static bool memleak()
    {
        return true;
    }

    static void memleakall(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "all", "Memory leak: " + varname + "", "memleakall");
    }
    static bool memleakall(const Settings &s)
    {
        return s._showAll;
    }

    static void resourceLeak(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Resource leak: " + varname + "", "resourceLeak");
    }
    static bool resourceLeak()
    {
        return true;
    }

    static void deallocDealloc(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Deallocating a deallocated pointer: " + varname + "", "deallocDealloc");
    }
    static bool deallocDealloc()
    {
        return true;
    }

    static void deallocuse(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Using '" + varname + "' after it is deallocated / released", "deallocuse");
    }
    static bool deallocuse()
    {
        return true;
    }

    static void cstyleCast(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "C-style pointer casting", "cstyleCast");
    }
    static bool cstyleCast(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void redundantIfDelete0(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "Redundant condition. It is safe to deallocate a NULL pointer", "redundantIfDelete0");
    }
    static bool redundantIfDelete0(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void redundantIfRemove(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "Redundant condition. The remove function in the STL will not do anything if element doesn't exist", "redundantIfRemove");
    }
    static bool redundantIfRemove(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void dangerousUsageStrtol(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "always", "Invalid radix in call to strtol or strtoul. Must be 0 or 2-36", "dangerousUsageStrtol");
    }
    static bool dangerousUsageStrtol()
    {
        return true;
    }

    static void ifNoAction(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "Found redundant if condition - 'if (condition);'", "ifNoAction");
    }
    static bool ifNoAction(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void sprintfOverlappingData(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "always", "Overlapping data buffer " + varname + "", "sprintfOverlappingData");
    }
    static bool sprintfOverlappingData()
    {
        return true;
    }

    static void udivError(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "always", "Unsigned division. The result will be wrong.", "udivError");
    }
    static bool udivError()
    {
        return true;
    }

    static void udivWarning(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "all style", "Warning: Division with signed and unsigned operators", "udivWarning");
    }
    static bool udivWarning(const Settings &s)
    {
        return s._checkCodingStyle || s._showAll;
    }

    static void unusedStructMember(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &structname, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "style", "struct or union member '" + structname + "::" + varname + "' is never used", "unusedStructMember");
    }
    static bool unusedStructMember(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void passedByValue(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &parname)
    {
        _writemsg(logger, tokenizer, Location, "style", "Function parameter '" + parname + "' is passed by value. It could be passed by reference instead.", "passedByValue");
    }
    static bool passedByValue(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void constStatement(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &type)
    {
        _writemsg(logger, tokenizer, Location, "style", "Redundant code: Found a statement that begins with " + type + " constant", "constStatement");
    }
    static bool constStatement(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void charArrayIndex(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "Warning - using char variable as array index", "charArrayIndex");
    }
    static bool charArrayIndex(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void charBitOp(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "style", "Warning - using char variable in bit operation", "charBitOp");
    }
    static bool charBitOp(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void variableScope(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &varname)
    {
        _writemsg(logger, tokenizer, Location, "never", "The scope of the variable " + varname + " can be limited", "variableScope");
    }
    static bool variableScope()
    {
        return false;
    }

    static void conditionAlwaysTrueFalse(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location, const std::string &truefalse)
    {
        _writemsg(logger, tokenizer, Location, "style", "Condition is always " + truefalse + "", "conditionAlwaysTrueFalse");
    }
    static bool conditionAlwaysTrueFalse(const Settings &s)
    {
        return s._checkCodingStyle;
    }

    static void strPlusChar(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "always", "Unusual pointer arithmetic", "strPlusChar");
    }
    static bool strPlusChar()
    {
        return true;
    }

    static void returnLocalVariable(ErrorLogger *logger, const Tokenizer *tokenizer, const Token *Location)
    {
        _writemsg(logger, tokenizer, Location, "always", "Returning pointer to local array variable", "returnLocalVariable");
    }
    static bool returnLocalVariable()
    {
        return true;
    }

};
#endif

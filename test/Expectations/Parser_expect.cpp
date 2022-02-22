/*
 * This file has been auto-generated by CppUTestMock v0.4.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -s c++17 -t Parser::Parse#error=Pointer~&$ -t "#const std::string &=String~$.c_str()" -t "#const Config &=ConstPointer~&$" -t "#std::ostream &=OutputOfType:std::ostream<std::string~&$" -t "#const std::filesystem::path &=String~$.generic_string().c_str()"
 */

#include "Parser_expect.hpp"

namespace expect { namespace Parser$ {
MockExpectedCall& Parse(CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> inputFilepath, CppUMockGen::Parameter<const void*> config, CppUMockGen::Parameter<bool> interpretAsCpp, CppUMockGen::Parameter<const char*> languageStandard, CppUMockGen::Parameter<const std::vector<std::string> &> includePaths, CppUMockGen::Parameter<void*> error, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectOneCall("Parser::Parse");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(inputFilepath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("inputFilepath", inputFilepath.getValue()); }
    if(config.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("config", config.getValue()); }
    if(interpretAsCpp.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withBoolParameter("interpretAsCpp", interpretAsCpp.getValue()); }
    if(languageStandard.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("languageStandard", languageStandard.getValue()); }
    if(includePaths.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("std::vector<std::string>", "includePaths", &includePaths.getValue()); }
    if(error.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("error", error.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
MockExpectedCall& Parse(unsigned int __numCalls__, CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> inputFilepath, CppUMockGen::Parameter<const void*> config, CppUMockGen::Parameter<bool> interpretAsCpp, CppUMockGen::Parameter<const char*> languageStandard, CppUMockGen::Parameter<const std::vector<std::string> &> includePaths, CppUMockGen::Parameter<void*> error, bool __return__)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "Parser::Parse");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(inputFilepath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("inputFilepath", inputFilepath.getValue()); }
    if(config.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withConstPointerParameter("config", config.getValue()); }
    if(interpretAsCpp.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withBoolParameter("interpretAsCpp", interpretAsCpp.getValue()); }
    if(languageStandard.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("languageStandard", languageStandard.getValue()); }
    if(includePaths.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withParameterOfType("std::vector<std::string>", "includePaths", &includePaths.getValue()); }
    if(error.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withPointerParameter("error", error.getValue()); }
    __expectedCall__.andReturnValue(__return__);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} }

namespace expect { namespace Parser$ {
MockExpectedCall& GenerateMock(CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> baseDirPath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectOneCall("Parser::GenerateMock");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(baseDirPath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("baseDirPath", baseDirPath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
MockExpectedCall& GenerateMock(unsigned int __numCalls__, CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> baseDirPath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "Parser::GenerateMock");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(baseDirPath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("baseDirPath", baseDirPath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} }

namespace expect { namespace Parser$ {
MockExpectedCall& GenerateExpectationHeader(CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> baseDirPath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectOneCall("Parser::GenerateExpectationHeader");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(baseDirPath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("baseDirPath", baseDirPath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
MockExpectedCall& GenerateExpectationHeader(unsigned int __numCalls__, CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> baseDirPath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "Parser::GenerateExpectationHeader");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(baseDirPath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("baseDirPath", baseDirPath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} }

namespace expect { namespace Parser$ {
MockExpectedCall& GenerateExpectationImpl(CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> headerFilepath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectOneCall("Parser::GenerateExpectationImpl");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(headerFilepath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("headerFilepath", headerFilepath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
MockExpectedCall& GenerateExpectationImpl(unsigned int __numCalls__, CppUMockGen::Parameter<const Parser*> __object__, CppUMockGen::Parameter<const char*> genOpts, CppUMockGen::Parameter<const char*> headerFilepath, const std::string* output)
{
    bool __ignoreOtherParams__ = false;
    MockExpectedCall& __expectedCall__ = mock().expectNCalls(__numCalls__, "Parser::GenerateExpectationImpl");
    if(!__object__.isIgnored()) { __expectedCall__.onObject(const_cast<Parser*>(__object__.getValue())); }
    if(genOpts.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("genOpts", genOpts.getValue()); }
    if(headerFilepath.isIgnored()) { __ignoreOtherParams__ = true; } else { __expectedCall__.withStringParameter("headerFilepath", headerFilepath.getValue()); }
    __expectedCall__.withOutputParameterOfTypeReturning("std::ostream", "output", output);
    if(__ignoreOtherParams__) { __expectedCall__.ignoreOtherParameters(); }
    return __expectedCall__;
}
} }


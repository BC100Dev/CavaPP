#ifndef CPPTEMPLATE_MODULEHEAD_HPP
#define CPPTEMPLATE_MODULEHEAD_HPP

#include <Cava/IO/Console.hpp>
#include <Cava/IO/InputStream.hpp>
#include <Cava/IO/OutputStream.hpp>
#include <Cava/IO/PrintStream.hpp>

namespace Cava::Lang {

    class System {
    public:
        static Cava::IO::InputStream* in;
        static Cava::IO::PrintStream* out;
        static Cava::IO::PrintStream* err;

        static void setIn(Cava::IO::InputStream* in);
        static void setOut(Cava::IO::PrintStream* out);
        static void setErr(Cava::IO::PrintStream* err);

        static Cava::IO::Console console();
    };

}

#endif //CPPTEMPLATE_MODULEHEAD_HPP

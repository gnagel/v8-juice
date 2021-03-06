#if !defined(V8_CONVERT_JSPDO_HPP_INCLUDED)
#define V8_CONVERT_JSPDO_HPP_INCLUDED
/** LICENSE

    This software's source code, including accompanying documentation and
    demonstration applications, are licensed under the following
    conditions...

    The author (Stephan G. Beal [http://wanderinghorse.net/home/stephan/])
    explicitly disclaims copyright in all jurisdictions which recognize
    such a disclaimer. In such jurisdictions, this software is released
    into the Public Domain.

    In jurisdictions which do not recognize Public Domain property
    (e.g. Germany as of 2011), this software is Copyright (c) 2011
    by Stephan G. Beal, and is released under the terms of the MIT License
    (see below).

    In jurisdictions which recognize Public Domain property, the user of
    this software may choose to accept it either as 1) Public Domain, 2)
    under the conditions of the MIT License (see below), or 3) under the
    terms of dual Public Domain/MIT License conditions described here, as
    they choose.

    The MIT License is about as close to Public Domain as a license can
    get, and is described in clear, concise terms at:

    http://en.wikipedia.org/wiki/MIT_License

    The full text of the MIT License follows:

    --
    Copyright (c) 2011 Stephan G. Beal (http://wanderinghorse.net/home/stephan/)

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.

    --END OF MIT LICENSE--

    For purposes of the above license, the term "Software" includes
    documentation and demonstration source code which accompanies
    this software. ("Accompanies" = is contained in the Software's
    primary public source code repository.)

*/

#include <v8.h>

namespace cvv8 {
    class JSPDO {
    private:
        JSPDO();
        JSPDO(JSPDO const &);
        JSPDO & operator=(JSPDO const &);
    public:
        /**
           Adds the JSPDO class to dest. It throws a native exception if
           something goes horribly wrong.
        */
        static void SetupBindings( v8::Handle<v8::Object> const & dest );
    };

/**
    FIXME: put the various ClassCreator_XXX policies here. The problem is
    that the policies don't actually use a publically-visible type and i don't
    want to leak those types to the C++ interface. :/ We have the same
    problem with JSToNative and friends. But... i could forward-declare those
    types, i guess, instead of #includ'ing them...
*/
}


#endif

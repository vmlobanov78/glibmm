/* glibmm - a C++ wrapper for the GLib toolkit
 *
 * Copyright 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _GLIBMM_H
#define _GLIBMM_H

/** @mainpage glibmm Reference Manual
 *
 * @section description Description
 *
 * glibmm is the official C++ interface for the popular library %Glib. See also
 * the <em>Programming with gtkmm</em> book for a tutorial on programming with
 * gtkmm and glibmm: http://library.gnome.org/devel/gtkmm-tutorial/stable/
 *
 * @section features Features
 *
 * - A UTF-8 string class that has the interface of std::string.
 * - A reference-counting smartpointer for easy memory management.
 * - Intermediate types for compatibility with STL containers.
 *
 * @section basics Basic usage
 *
 * Include the glibmm header:
 * @code
 * #include <glibmm.h>
 * @endcode
 * This includes every header installed by glibmm, so can slow down
 * compilation, but suffices for this simple example. Assuming that your
 * program source file is @c program.cc, compile it with:
 * @code
 * g++ program.cc -o program  `pkg-config --cflags --libs glibmm-2.4`
 * @endcode
 * Alternatively, if using autoconf, use the following in @c configure.ac:
 * @code
 * PKG_CHECK_MODULES([GLIBMM], [glibmm-2.4])
 * @endcode
 * Then use the generated @c GLIBMM_CFLAGS and @c GLIBMM_LIBS variables in the
 * project Makefile.am files. For example:
 * @code
 * program_CPPFLAGS = $(GLIBMM_CFLAGS)
 * program_LDADD = $(GLIBMM_LIBS)
 * @endcode
 */

#include <glibmmconfig.h>
//#include <glibmm/i18n.h> //This must be included by the application, after system headers such as <iostream>.
#include <glibmm/arrayhandle.h>
#include <glibmm/balancedtree.h>
#include <glibmm/checksum.h>
#include <glibmm/class.h>
#include <glibmm/containerhandle_shared.h>
#include <glibmm/convert.h>
#include <glibmm/date.h>
#include <glibmm/dispatcher.h>
#include <glibmm/error.h>
#include <glibmm/exception.h>
#include <glibmm/exceptionhandler.h>
#include <glibmm/fileutils.h>
#include <glibmm/helperlist.h>
#include <glibmm/interface.h>
#include <glibmm/iochannel.h>
#include <glibmm/init.h>
#include <glibmm/keyfile.h>
#include <glibmm/streamiochannel.h>
#include <glibmm/listhandle.h>
#include <glibmm/main.h>
#include <glibmm/markup.h>
#include <glibmm/miscutils.h>
#include <glibmm/module.h>
#include <glibmm/nodetree.h>
#include <glibmm/objectbase.h>
#include <glibmm/object.h>
#include <glibmm/optioncontext.h>
#include <glibmm/pattern.h>
#include <glibmm/property.h>
#include <glibmm/propertyproxy_base.h>
#include <glibmm/propertyproxy.h>
#include <glibmm/quark.h>
#include <glibmm/random.h>
#include <glibmm/regex.h>
#include <glibmm/refptr.h>
#include <glibmm/shell.h>
#include <glibmm/signalproxy_connectionnode.h>
#include <glibmm/signalproxy.h>
#include <glibmm/slisthandle.h>
#include <glibmm/spawn.h>
#include <glibmm/stringutils.h>
#include <glibmm/thread.h>
#include <glibmm/threadpool.h>
#include <glibmm/timer.h>
#include <glibmm/timeval.h>
#include <glibmm/uriutils.h>
#include <glibmm/ustring.h>
#include <glibmm/value.h>
#include <glibmm/valuearray.h>
#include <glibmm/wrap.h>

#endif /* _GLIBMM_H */

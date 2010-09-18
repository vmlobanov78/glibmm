/* generate_defs_gio.cc
 *
 * Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "generate_extra_defs.h"
#include <iostream>

#define G_SETTINGS_ENABLE_BACKEND 1
#include <gio/gio.h>
#include <gio/gsettingsbackend.h>

#ifndef G_OS_WIN32
#include <gio/gunixcredentialsmessage.h>
# include <gio/gunixfdmessage.h>
# include <gio/gunixinputstream.h>
# include <gio/gunixoutputstream.h>
# include <gio/gunixconnection.h>
#endif

int main(int, char**)
{
  g_type_init ();

  std::cout << get_defs(G_TYPE_ASYNC_RESULT)
            << get_defs(G_TYPE_CANCELLABLE)
            << get_defs(G_TYPE_BUFFERED_INPUT_STREAM)
            << get_defs(G_TYPE_BUFFERED_OUTPUT_STREAM)
            << get_defs(G_TYPE_DATA_INPUT_STREAM)
            << get_defs(G_TYPE_DATA_OUTPUT_STREAM)
            << get_defs(G_TYPE_DRIVE)
            << get_defs(G_TYPE_FILE)
            << get_defs(G_TYPE_FILE_ENUMERATOR)
            << get_defs(G_TYPE_FILE_INFO)
            << get_defs(G_TYPE_FILE_ICON)
            << get_defs(G_TYPE_FILE_MONITOR)
            << get_defs(G_TYPE_FILENAME_COMPLETER)
//            << get_defs(G_TYPE_FILE_ATTRIBUTE_INFO_LIST)
//            << get_defs(G_TYPE_FILE_ATTRIBUTE_MATCHER)
            << get_defs(G_TYPE_FILE_INPUT_STREAM)
            << get_defs(G_TYPE_FILE_OUTPUT_STREAM)
            << get_defs(G_TYPE_FILTER_INPUT_STREAM)
            << get_defs(G_TYPE_FILTER_OUTPUT_STREAM)

#ifndef G_OS_WIN32
            << get_defs(G_TYPE_UNIX_CREDENTIALS_MESSAGE)
            << get_defs(G_TYPE_UNIX_FD_MESSAGE)
            << get_defs(G_TYPE_UNIX_INPUT_STREAM)
            << get_defs(G_TYPE_UNIX_OUTPUT_STREAM)
#endif

            << get_defs(G_TYPE_INPUT_STREAM)
            << get_defs(G_TYPE_LOADABLE_ICON)
            << get_defs(G_TYPE_MEMORY_INPUT_STREAM)
            << get_defs(G_TYPE_MEMORY_OUTPUT_STREAM)
            << get_defs(G_TYPE_MOUNT)
            << get_defs(G_TYPE_MOUNT_OPERATION)
            << get_defs(G_TYPE_PROXY)
            << get_defs(G_TYPE_PROXY_ADDRESS)
            << get_defs(G_TYPE_PROXY_ADDRESS_ENUMERATOR)
            << get_defs(G_TYPE_PROXY_RESOLVER)
            << get_defs(G_TYPE_SEEKABLE)
            << get_defs(G_TYPE_SETTINGS)
            << get_defs(G_TYPE_SETTINGS_BACKEND)
            << get_defs(G_TYPE_SIMPLE_ASYNC_RESULT)
            << get_defs(G_TYPE_THEMED_ICON)

            //TODO: This causes a g_warning:
            //GLib-GObject-CRITICAL **: g_param_spec_pool_list: assertion `pool != NULL' failed"
            << get_defs(G_TYPE_VOLUME)

            << get_defs(G_TYPE_VOLUME_MONITOR)

            // network IO classes
            << get_defs(G_TYPE_DBUS_AUTH_OBSERVER)
            << get_defs(G_TYPE_DBUS_SERVER)
            << get_defs(G_TYPE_INET_ADDRESS)
            << get_defs(G_TYPE_INET_SOCKET_ADDRESS)
            << get_defs(G_TYPE_SOCKET_ADDRESS)
            << get_defs(G_TYPE_SOCKET_ADDRESS_ENUMERATOR)
            << get_defs(G_TYPE_SOCKET_CONNECTABLE)
            << get_defs(G_TYPE_SRV_TARGET)
            << get_defs(G_TYPE_RESOLVER)
            << get_defs(G_TYPE_NETWORK_ADDRESS)
            << get_defs(G_TYPE_NETWORK_SERVICE)
            << get_defs(G_TYPE_SETTINGS)
            << get_defs(G_TYPE_SOCKET)
            << get_defs(G_TYPE_SOCKET_CLIENT)
            << get_defs(G_TYPE_SOCKET_CONNECTION)
            << get_defs(G_TYPE_TCP_CONNECTION)
#ifndef G_OS_WIN32
            << get_defs(G_TYPE_UNIX_CONNECTION)
#endif
            << get_defs(G_TYPE_SOCKET_LISTENER)
            << get_defs(G_TYPE_SOCKET_SERVICE)
            << get_defs(G_TYPE_THREADED_SOCKET_SERVICE)

            << std::endl;
  
  return 0;
}

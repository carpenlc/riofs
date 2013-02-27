/*
 * Copyright (C) 2012-2013 Paul Ionkin <paul.ionkin@gmail.com>
 * Copyright (C) 2012-2013 Skoobe GmbH. All rights reserved.
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#ifndef _UTILS_H_
#define _UTILS_H_

#include "global.h"

gchar *get_random_string (size_t len, gboolean readable);
gboolean get_md5_sum (const gchar *buf, size_t len, gchar **md5str, gchar **md5b);
gchar *get_base64 (const gchar *buf, size_t len);
gboolean uri_is_https (const struct evhttp_uri *uri);
gint uri_get_port (const struct evhttp_uri *uri);

// remove directory tree
int utils_del_tree (const gchar *path, int depth);

#endif

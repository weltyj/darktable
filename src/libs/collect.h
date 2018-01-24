/*
    This file is part of darktable,
    copyright (c) 2009--2011 johannes hanika.
    copyright (c) 2012 henrik andersson.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <glib.h>
#include <glib/gi18n.h>

typedef enum dt_lib_collect_mode_t
{
  DT_LIB_COLLECT_MODE_AND = 0,
  DT_LIB_COLLECT_MODE_OR,
  DT_LIB_COLLECT_MODE_AND_NOT
} dt_lib_collect_mode_t;

const char *dt_lib_collect_string[] = { N_("film roll"),   N_("folders"),     N_("camera"),
                                        N_("tag"),         N_("date"),        N_("time"),
                                        N_("history"),     N_("color label"), N_("title"),
                                        N_("description"), N_("creator"),     N_("publisher"),
                                        N_("rights"),      N_("lens"),        N_("focal length"),
                                        N_("ISO"),         N_("aperture"),    N_("filename"),
                                        N_("geotagging"),  N_("local copy") };
const int dt_lib_collect_string_cnt = sizeof(dt_lib_collect_string) / sizeof(dt_lib_collect_string[0]);

// modelines: These editor modelines have been set for all relevant files by tools/update_modelines.sh
// vim: shiftwidth=2 expandtab tabstop=2 cindent
// kate: tab-indents: off; indent-width 2; replace-tabs on; indent-mode cstyle; remove-trailing-spaces modified;

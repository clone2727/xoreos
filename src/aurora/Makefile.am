# xoreos - A reimplementation of BioWare's Aurora engine
#
# xoreos is the legal property of its developers, whose names
# can be found in the AUTHORS file distributed with this source
# distribution.
#
# xoreos is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 3
# of the License, or (at your option) any later version.
#
# xoreos is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with xoreos. If not, see <http://www.gnu.org/licenses/>.

# Aurora file loaders and related support code.

include $(top_srcdir)/Makefile.common

SUBDIRS = \
          nwscript \
          $(EMPTY)

noinst_LTLIBRARIES = libaurora.la

noinst_HEADERS = \
                 types.h \
                 util.h \
                 language.h \
                 language_strings.h \
                 archive.h \
                 aurorafile.h \
                 keyfile.h \
                 biffile.h \
                 bzffile.h \
                 erffile.h \
                 rimfile.h \
                 ndsrom.h \
                 zipfile.h \
                 resman.h \
                 talktable.h \
                 talktable_tlk.h \
                 talktable_gff.h \
                 talkman.h \
                 ssffile.h \
                 2dafile.h \
                 gdafile.h \
                 2dareg.h \
                 locstring.h \
                 gff3file.h \
                 gff4file.h \
                 gff4fields.h \
                 dlgfile.h \
                 lytfile.h \
                 visfile.h \
                 ifofile.h \
                 pefile.h \
                 herffile.h \
                 smallfile.h \
                 nitrofile.h \
                 nsbtxfile.h \
                 cdpth.h \
                 $(EMPTY)

libaurora_la_SOURCES = \
                       util.cpp \
                       language.cpp \
                       archive.cpp \
                       aurorafile.cpp \
                       keyfile.cpp \
                       biffile.cpp \
                       bzffile.cpp \
                       erffile.cpp \
                       rimfile.cpp \
                       ndsrom.cpp \
                       zipfile.cpp \
                       resman.cpp \
                       talktable.cpp \
                       talktable_tlk.cpp \
                       talktable_gff.cpp \
                       talkman.cpp \
                       ssffile.cpp \
                       2dafile.cpp \
                       gdafile.cpp \
                       2dareg.cpp \
                       locstring.cpp \
                       gff3file.cpp \
                       gff4file.cpp \
                       dlgfile.cpp \
                       lytfile.cpp \
                       visfile.cpp \
                       ifofile.cpp \
                       pefile.cpp \
                       herffile.cpp \
                       smallfile.cpp \
                       nitrofile.cpp \
                       nsbtxfile.cpp \
                       cdpth.cpp \
                       $(EMPTY)

libaurora_la_LIBADD = \
                      nwscript/libnwscript.la \
                      $(EMPTY)

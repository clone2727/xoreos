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

# Neverwinter Nights.

include $(top_srcdir)/Makefile.common

noinst_LTLIBRARIES = libnwn.la

noinst_HEADERS = \
                 nwn.h \
                 probes.h \
                 types.h \
                 modelloader.h \
                 version.h \
                 console.h \
                 game.h \
                 location.h \
                 tileset.h \
                 objectcontainer.h \
                 module.h \
                 area.h \
                 object.h \
                 waypoint.h \
                 situated.h \
                 placeable.h \
                 door.h \
                 creature.h \
                 item.h \
                 gui/gui.h \
                 gui/legal.h \
                 gui/widgets/tooltip.h \
                 gui/widgets/nwnwidget.h \
                 gui/widgets/modelwidget.h \
                 gui/widgets/quadwidget.h \
                 gui/widgets/textwidget.h \
                 gui/widgets/button.h \
                 gui/widgets/checkbox.h \
                 gui/widgets/close.h \
                 gui/widgets/editbox.h \
                 gui/widgets/frame.h \
                 gui/widgets/label.h \
                 gui/widgets/listbox.h \
                 gui/widgets/panel.h \
                 gui/widgets/scrollbar.h \
                 gui/widgets/portrait.h \
                 gui/widgets/slider.h \
                 gui/widgets/buttonsgroup.h \
                 gui/widgets/gridbox.h \
                 gui/widgets/listitembutton.h \
                 gui/dialogs/okcancel.h \
                 gui/dialogs/yesnocancel.h \
                 gui/options/controls.h \
                 gui/options/feedback.h \
                 gui/options/game.h \
                 gui/options/gorepass.h \
                 gui/options/resolution.h \
                 gui/options/sound.h \
                 gui/options/soundadv.h \
                 gui/options/video.h \
                 gui/options/videoadv.h \
                 gui/chargen/chargenbase.h \
                 gui/chargen/chargenchoices.h \
                 gui/chargen/chargen.h \
                 gui/chargen/charsex.h \
                 gui/chargen/charrace.h \
                 gui/chargen/charportrait.h \
                 gui/chargen/charclass.h \
                 gui/chargen/charalignment.h \
                 gui/chargen/charattributes.h \
                 gui/chargen/charpackage.h \
                 gui/main/charpremade.h \
                 gui/main/chartype.h \
                 gui/main/main.h \
                 gui/main/moviesbase.h \
                 gui/main/moviescamp.h \
                 gui/main/new.h \
                 gui/main/newcamp.h \
                 gui/main/newgamefog.h \
                 gui/main/newmodule.h \
                 gui/main/newpremium.h \
                 gui/main/newxp1.h \
                 gui/main/newxp2.h \
                 gui/main/options.h \
                 gui/ingame/ingame.h \
                 gui/ingame/main.h \
                 gui/ingame/quickbar.h \
                 gui/ingame/quickchat.h \
                 gui/ingame/compass.h \
                 gui/ingame/charinfo.h \
                 gui/ingame/partyleader.h \
                 gui/ingame/dialog.h \
                 script/container.h \
                 script/functions.h \
                 script/function_tables.h \
                 $(EMPTY)

libnwn_la_SOURCES = \
                    nwn.cpp \
                    probes.cpp \
                    types.cpp \
                    modelloader.cpp \
                    version.cpp \
                    creature.cpp \
                    console.cpp \
                    game.cpp \
                    module.cpp \
                    area.cpp \
                    tileset.cpp \
                    objectcontainer.cpp \
                    object.cpp \
                    waypoint.cpp \
                    situated.cpp \
                    placeable.cpp \
                    door.cpp \
                    item.cpp \
                    location.cpp \
                    gui/gui.cpp \
                    gui/legal.cpp \
                    gui/widgets/tooltip.cpp \
                    gui/widgets/nwnwidget.cpp \
                    gui/widgets/modelwidget.cpp \
                    gui/widgets/quadwidget.cpp \
                    gui/widgets/textwidget.cpp \
                    gui/widgets/button.cpp \
                    gui/widgets/checkbox.cpp \
                    gui/widgets/close.cpp \
                    gui/widgets/editbox.cpp \
                    gui/widgets/frame.cpp \
                    gui/widgets/label.cpp \
                    gui/widgets/listbox.cpp \
                    gui/widgets/panel.cpp \
                    gui/widgets/scrollbar.cpp \
                    gui/widgets/portrait.cpp \
                    gui/widgets/slider.cpp \
                    gui/widgets/buttonsgroup.cpp \
                    gui/widgets/gridbox.cpp \
                    gui/widgets/listitembutton.cpp \
                    gui/dialogs/okcancel.cpp \
                    gui/dialogs/yesnocancel.cpp \
                    gui/options/controls.cpp \
                    gui/options/feedback.cpp \
                    gui/options/game.cpp \
                    gui/options/gorepass.cpp \
                    gui/options/resolution.cpp \
                    gui/options/sound.cpp \
                    gui/options/soundadv.cpp \
                    gui/options/video.cpp \
                    gui/options/videoadv.cpp \
                    gui/chargen/chargenbase.cpp \
                    gui/chargen/chargenchoices.cpp \
                    gui/chargen/chargen.cpp \
                    gui/chargen/charsex.cpp \
                    gui/chargen/charrace.cpp \
                    gui/chargen/charportrait.cpp \
                    gui/chargen/charclass.cpp \
                    gui/chargen/charalignment.cpp \
                    gui/chargen/charattributes.cpp \
                    gui/chargen/charpackage.cpp \
                    gui/main/charpremade.cpp \
                    gui/main/chartype.cpp \
                    gui/main/main.cpp \
                    gui/main/moviesbase.cpp \
                    gui/main/moviescamp.cpp \
                    gui/main/new.cpp \
                    gui/main/newcamp.cpp \
                    gui/main/newgamefog.cpp \
                    gui/main/newmodule.cpp \
                    gui/main/newpremium.cpp \
                    gui/main/newxp1.cpp \
                    gui/main/newxp2.cpp \
                    gui/main/options.cpp \
                    gui/ingame/ingame.cpp \
                    gui/ingame/main.cpp \
                    gui/ingame/quickbar.cpp \
                    gui/ingame/quickchat.cpp \
                    gui/ingame/compass.cpp \
                    gui/ingame/charinfo.cpp \
                    gui/ingame/partyleader.cpp \
                    gui/ingame/dialog.cpp \
                    script/container.cpp \
                    script/functions.cpp \
                    script/functions_math.cpp \
                    script/functions_string.cpp \
                    script/functions_module.cpp \
                    script/functions_object.cpp \
                    script/functions_situated.cpp \
                    script/functions_creature.cpp \
                    script/functions_action.cpp \
                    script/functions_conversation.cpp \
                    script/functions_sound.cpp \
                    $(EMPTY)

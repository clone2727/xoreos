/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  Unit tests for our String functions.
 */

#include "gtest/gtest.h"

#include "src/common/string.h"

GTEST_TEST(String, format) {
	const std::string str = Common::String::format("%s|%s|%d", "Foo", "Bar", 23);

	EXPECT_STREQ(str.c_str(), "Foo|Bar|23");
}

GTEST_TEST(String, charClasses) {
	EXPECT_TRUE (Common::String::isASCII('F'));
	EXPECT_FALSE(Common::String::isASCII(0xF6));

	EXPECT_TRUE (Common::String::isSpace(' '));
	EXPECT_FALSE(Common::String::isSpace('x'));

	EXPECT_TRUE (Common::String::isDigit('0'));
	EXPECT_FALSE(Common::String::isDigit('x'));

	EXPECT_TRUE (Common::String::isAlpha('x'));
	EXPECT_FALSE(Common::String::isAlpha('.'));
	EXPECT_FALSE(Common::String::isAlpha('0'));

	EXPECT_TRUE (Common::String::isAlNum('x'));
	EXPECT_TRUE (Common::String::isAlNum('0'));
	EXPECT_FALSE(Common::String::isAlNum('.'));

	EXPECT_TRUE (Common::String::isCntrl(0x10));
	EXPECT_FALSE(Common::String::isCntrl('x'));
}

GTEST_TEST(String, convertToUTF8) {
	EXPECT_EQ(Common::String::convertToUTF8(u"Some text"), std::string("Some text"));
	EXPECT_EQ(Common::String::convertToUTF8(UINT32_C(0x1234)), std::string("\xE1\x88\xB4"));
	EXPECT_EQ(Common::String::convertToUTF8(U"Some more text"), std::string("Some more text"));
}

GTEST_TEST(String, fromUTF16) {
	EXPECT_EQ(Common::String::fromUTF16(0x00F6), 0xF6);
}

GTEST_TEST(String, validUTF8) {
	EXPECT_TRUE(Common::String::isValidUTF8("Some ASCII, now\xC3\xB6"));
	EXPECT_FALSE(Common::String::isValidUTF8("This is bad: \xC3\xC3\xC3\xC3"));
}

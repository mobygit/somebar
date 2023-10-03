// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrains Mono Nerd Font 12";

constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x22, 0x22)};
constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0x00, 0x55, 0x77)};
constexpr const char* termcmd[] = {"alacritty", nullptr};

static std::vector<std::string> tagNames = {
	"dev", "www", "sys",
	"doc", "vbox", "chat",
	"mus", "vid", "gfx",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};

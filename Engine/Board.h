#pragma once

#include "Graphics.h"
#include "Location.h"
#include "Colors.h"
#include <assert.h>

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell( const Location &loc, Color c);
	int GetGridWidth();
	int GetGridHeight();
	bool IsinsideBoard(const Location& loc) const;
private:
	static constexpr int dimension = 20;
	static constexpr int width = 25;
	static constexpr int height = 25;
	Graphics& gfx;
};
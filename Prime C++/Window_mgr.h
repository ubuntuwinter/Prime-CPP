// Window_mgr.h
#pragma once
#ifndef __WINDOW_MGR_H__
#define __WINDOW_MGR_H__
#include "Screen.h"
#include <vector>

class Window_mgr {
private:
	std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

#endif // !__WINDOW_MGR_H__

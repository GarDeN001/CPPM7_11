#pragma once
#include <iostream>
#ifdef LeaverLibraryDynamic_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif
class Leaver {
public:
	LEAVERLIBRARY_API void leave(std::string str);
};
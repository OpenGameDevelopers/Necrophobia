#include <GitVersion.hpp>
#include <iostream>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "Necrophobia | Rev. [" << GIT_COMMITHASH << "]" << std::endl;
	return 0;
}

